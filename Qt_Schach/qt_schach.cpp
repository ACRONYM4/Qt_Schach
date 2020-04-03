#include "qt_schach.h"

Qt_Schach::Qt_Schach(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//actions();
	this->statusBar()->setSizeGripEnabled(false);//disable resize
	setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);//disable resize #2

	connect(ui.actionExit, &QAction::triggered, this, &Qt_Schach::exit);//File->Exit action
	for (auto i : findChildren<cQlabel*>(QRegExp("l_._.")))//connect all clickable cQlabels with function
	{
		connect(i, &cQlabel::clicked, this, &Qt_Schach::clickedLabel);
	}

	//tests:
	auto labels = this->findChildren<QLabel*>(QRegExp("l_._.")); //Test zum finden von Labeln mit RegEx

	ui.l_a_3->setText(QString::number(labels.size()));

	//connect(ui.l_d_8, &cQlabel::clicked, this, [this]() {ui.l_a_5->setText("test"); }); //Label click test

	Bauer* b = new Bauer(nullptr, Farbe::white);
	QVector<Figur*> Figuren;

	Figuren.push_back(b);

	ui.l_b_3->setText(QString::number(Figuren.at(0)->possibleMoves().at(0).x));
}

void Qt_Schach::exit()
{
	this->close();
}

void Qt_Schach::clickedLabel()
{
	cQlabel* _label = dynamic_cast<cQlabel*>(sender());
	if (_label != nullptr) //clicked item is of type cQlabel
	{
		if (currentSelection != Coord::empty()) //something is selected
		{
			//todo: clicked label is possible move of selected label -> move piece
			findChild<cQlabel*>(currentSelection.toLabelName())->deselect();
			currentSelection = Coord::empty();
		}
		else //nothing is selected
		{
			_label->select();
			currentSelection = Coord(_label->objectName());
		}
	}
}
