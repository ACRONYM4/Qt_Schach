#include "savegameui.h"

saveGameUi::saveGameUi(QWidget *parent) : QDialog(parent)
{
	ui.setupUi(this);

	MYSQL* connection, mysql;
	MYSQL_RES* result;
	MYSQL_ROW row;
	int query_state;
	QString query;

	mysql_init(&mysql);

	connection = mysql_real_connect(&mysql, hostname.c_str(), username.c_str(), passwd.c_str(), db.c_str(), 3306, 0, 0);

	query = "SELECT game_id.ID, MAX(rounds.Round), game_id.comments FROM game_id JOIN rounds ON game_id.ID = rounds.ID GROUP BY game_id.ID";

	query_state = mysql_query(connection, query.toStdString().c_str());

	result = mysql_store_result(connection);

	ui.tableWidget->setRowCount(mysql_num_rows(result) + 1);
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
	QTableWidgetItem* item = new QTableWidgetItem("new Save");
	ui.tableWidget->setItem(i, 0, item);

	connect(ui.tableWidget, &QTableWidget::currentCellChanged, this, &saveGameUi::changeID);
	connect(ui.buttonBox, &QDialogButtonBox::accepted, this, &saveGameUi::accepted);
	connect(ui.buttonBox, &QDialogButtonBox::rejected, this, &saveGameUi::rejected);
}

saveGameUi::~saveGameUi()
{
}

int saveGameUi::getId()
{
	return id;
}

bool saveGameUi::getAccepted()
{
	return accept;
}

QString saveGameUi::getComments()
{
	return comments;
}

void saveGameUi::accepted()
{
	accept = true;
	comments = ui.textEdit->toPlainText();
	close();
}

void saveGameUi::rejected()
{
	close();
}

void saveGameUi::changeID(int row, int col)
{
	QTableWidgetItem* cell = ui.tableWidget->item(row, 0);
	if (cell != nullptr)
	{
		bool ok;
		id = cell->text().toInt(&ok);
		if (!ok)
			id = -1;
		comments = ui.textEdit->toPlainText();
	}
	else
	{
		id = -1;
		comments = "";
	}
}
