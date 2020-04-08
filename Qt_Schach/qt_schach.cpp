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
	//auto labels = this->findChildren<QLabel*>(QRegExp("l_._.")); //Test zum finden von Labeln mit RegEx

	//ui.l_a_3->setText(QString::number(labels.size()));

	//connect(ui.l_d_8, &cQlabel::clicked, this, [this]() {ui.l_a_5->setText("test"); }); //Label click test


	for (int i = 1; i <= 8; i++)
	{
		Pawn* p = new Pawn(nullptr, Farbe::white, Coord(i, 2));
		Figuren[p->getPos()] = p;
		p = new Pawn(nullptr, Farbe::black, Coord(i, 7));
		Figuren[p->getPos()] = p;
		if (i == 1 || i == 8)
		{
			Rook* r = new Rook(nullptr, Farbe::white, Coord(i, 1));
			Figuren[r->getPos()] = r;
			r = new Rook(nullptr, Farbe::black, Coord(i, 8));
			Figuren[r->getPos()] = r;
		}
		if (i == 2 || i ==7)
		{
			Knight* n = new Knight(nullptr, Farbe::white, Coord(i, 1));
			Figuren[n->getPos()] = n;
			n = new Knight(nullptr, Farbe::black, Coord(i, 8));
			Figuren[n->getPos()] = n;
		}
		if (i == 3 || i == 6)
		{
			Bishop* b = new Bishop(nullptr, Farbe::white, Coord(i, 1));
			Figuren[b->getPos()] = b;
			b = new Bishop(nullptr, Farbe::black, Coord(i, 8));
			Figuren[b->getPos()] = b;
		}
		if (i == 4)
		{
			Queen* q = new Queen(nullptr, Farbe::white, Coord(i, 1));
			Figuren[q->getPos()] = q;
			q = new Queen(nullptr, Farbe::black, Coord(i, 8));
			Figuren[q->getPos()] = q;
		}
		if (i == 5)
		{
			King* k = new King(nullptr, Farbe::white, Coord(i, 1));
			Figuren[k->getPos()] = k;
			k = new King(nullptr, Farbe::black, Coord(i, 8));
			Figuren[k->getPos()] = k;
		}
	}


	/*for (auto i : Figuren[{0, 0}]->possibleMoves(Figuren))
	{
		findChild<cQlabel*>(i.toLabelName())->select();
	}*/

	//ui.l_b_3->setText(QString::number(Figuren[{0, 0}]->possibleMoves(Figuren).at(0).x));
}

void Qt_Schach::exit()
{
	this->close();
}

void Qt_Schach::clickedLabel()
{
	cQlabel* _label = dynamic_cast<cQlabel*>(sender());
	if (_label != nullptr) //clicked item is of type cQlabel
	{ //todo: label is your piece! //todo: mate?
		if (currentSelection != Coord::empty()) //something is selected
		{
			//todo: clicked label is possible move of selected label -> move piece
			cQlabel* start = findChild<cQlabel*>(currentSelection.toLabelName());
			//move test
			if (start->text().length() && start != _label)
			{
				Coord target(_label->objectName());
				_label->setText(start->text());
				start->setText("");
				Figuren[target] = Figuren[currentSelection];
				Figuren[target]->bewegen(target);
				Figuren.erase(Figuren.find(currentSelection));
			}
			//end test

			findChild<cQlabel*>(currentSelection.toLabelName())->deselect();
			for (auto i : findChildren<cQlabel*>(QRegExp("l_._.")))
				i->deselect();
			currentSelection = Coord::empty();
		}
		else //nothing is selected
		{
			_label->select();
			if	(_label->text().length())
			{
				QString test = _label->objectName();
				for (auto i: Figuren[Coord(_label->objectName())]->possibleMoves(Figuren))
				{
					auto temp = findChild<cQlabel*>(i.toLabelName());
					if (temp != nullptr)
					{
						temp->select();
					}
				}
			}
			currentSelection = Coord(_label->objectName());
		}
	}
}

void Qt_Schach::keyPressEvent(QKeyEvent* _event)
{
	ui.l_g_5->setFont(QFont(QString("Helvetica"), 5));
	ui.l_g_5->setText(QString::number(_event->key()));
}
