#include "loadgameui.h"

LoadGameUI::LoadGameUI(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);


	MYSQL* connection, mysql;
	MYSQL_RES* result;
	MYSQL_ROW row;
	int query_state;
	QString query;

	mysql_init(&mysql);

	connection = mysql_real_connect(&mysql, hostname.c_str(), username.c_str(), passwd.c_str(), db.c_str(), 3306, 0, 0);

	query = "SELECT ID, COUNT(round) FROM rounds GROUP BY ID";

	query_state = mysql_query(connection, query.toStdString().c_str());

	result = mysql_store_result(connection);

	ui.tableWidget->setRowCount(mysql_num_rows(result));
	ui.tableWidget->setColumnCount(mysql_num_fields(result));

	int i = 0;
	while ((row = mysql_fetch_row(result)) != nullptr)
	{
		for (int j = 0; j < mysql_num_fields(result); j++)
		{
			QTableWidgetItem* item = new QTableWidgetItem(row[j]);
			ui.tableWidget->setItem(i, j, item);
		}

		i++;
	}

	connect(ui.tableWidget, &QTableWidget::currentCellChanged, this, &LoadGameUI::changeID);
	connect(ui.buttonBox, &QDialogButtonBox::accepted, this, &LoadGameUI::accepted);
	connect(ui.buttonBox, &QDialogButtonBox::rejected, this, &LoadGameUI::rejected);
}

LoadGameUI::~LoadGameUI()
{
}

int LoadGameUI::getId()
{
	return id;
}

bool LoadGameUI::getAccepted()
{
	return accept;
}

void LoadGameUI::accepted()
{
	accept = true;
	close();
}

void LoadGameUI::rejected()
{
	close();
}

void LoadGameUI::changeID(int row, int col)
{
	QTableWidgetItem* cell = ui.tableWidget->item(row, col);
	if (cell != nullptr)
	{
		id = cell->text().toInt();
	}
	else
	{
		id = -1;
	}
}
