#include "qt_schach.h"

Qt_Schach::Qt_Schach(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->statusBar()->setSizeGripEnabled(false);//disable resize
	setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);//disable resize #2

	connect(ui.actionExit, &QAction::triggered, this, &Qt_Schach::exit);//File->Exit action
	for (auto i : findChildren<cQlabel*>(QRegExp("l_._.")))//connect all clickable cQlabels with function
	{
		connect(i, &cQlabel::clicked, this, &Qt_Schach::clickedLabel);
	}

	for (int i = 1; i <= 8; i++)//initilize board
	{
		std::shared_ptr<Pawn> p = std::make_shared<Pawn>(nullptr, Farbe::white, Coord(i, 2));
		Figuren[p->getPos()] = p;
		p = std::make_shared<Pawn>(nullptr, Farbe::black, Coord(i, 7));
		Figuren[p->getPos()] = p;
		if (i == 1 || i == 8)
		{
			std::shared_ptr<Rook> r = std::make_shared<Rook>(nullptr, Farbe::white, Coord(i, 1));
			Figuren[r->getPos()] = r;
			r = std::make_shared<Rook>(nullptr, Farbe::black, Coord(i, 8));
			Figuren[r->getPos()] = r;
		}
		if (i == 2 || i ==7)
		{
			std::shared_ptr<Knight> n = std::make_shared<Knight>(nullptr, Farbe::white, Coord(i, 1));
			Figuren[n->getPos()] = n;
			n = std::make_shared<Knight>(nullptr, Farbe::black, Coord(i, 8));
			Figuren[n->getPos()] = n;
		}
		if (i == 3 || i == 6)
		{
			std::shared_ptr<Bishop> b = std::make_shared<Bishop>(nullptr, Farbe::white, Coord(i, 1));
			Figuren[b->getPos()] = b;
			b = std::make_shared<Bishop>(nullptr, Farbe::black, Coord(i, 8));
			Figuren[b->getPos()] = b;
		}
		if (i == 4)
		{
			std::shared_ptr<Queen> q = std::make_shared<Queen>(nullptr, Farbe::white, Coord(i, 1));
			Figuren[q->getPos()] = q;
			q = std::make_shared<Queen>(nullptr, Farbe::black, Coord(i, 8));
			Figuren[q->getPos()] = q;
		}
		if (i == 5)
		{
			std::shared_ptr<King> k = std::make_shared<King>(nullptr, Farbe::white, Coord(i, 1));
			Figuren[k->getPos()] = k;
			k = std::make_shared<King>(nullptr, Farbe::black, Coord(i, 8));
			Figuren[k->getPos()] = k;
		}
	}
	recalculateMoves();
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
			auto test = Farbe(round % 2);
			if (Figuren.find(currentSelection) != Figuren.end() && Figuren[currentSelection]->getFarbe() == Farbe(round % 2))
				moveCurrentSelection(_label);

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
				for (auto i: Figuren[Coord(_label->objectName())]->possibleMoves())
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

void Qt_Schach::keyPressEvent(QKeyEvent* _event)//get Key numbers test
{
	/*ui.l_g_5->setFont(QFont(QString("Helvetica"), 5));
	ui.l_g_5->setText(QString::number(_event->key()));*/
}

bool Qt_Schach::isLegalMove(Coord start, Coord target)
{ 
	return isLegalMove(start, target, Figuren);
}

bool Qt_Schach::isLegalMove(Coord start, Coord target, QMap<Coord, std::shared_ptr<Figur>>& _f)
{
	if (_f.find(start) == _f.end())
		return false;
	for (auto i : _f[start]->possibleMoves())
		if (i == target)
			return true;
	return false;
}

void Qt_Schach::movePieceToTarget(Coord start, Coord target, bool legal)
{
	if (!legal || isLegalMove(start, target))
	{
		cQlabel* start_label = findChild<cQlabel*>(start.toLabelName());
		std::shared_ptr<Figur> start_figur = Figuren[currentSelection];
		cQlabel* target_label = findChild<cQlabel*>(target.toLabelName());

		if (start_label->text().length() && start_label != target_label)
		{
			//auto test = tempMove(start, target, Figuren);
			Coord target(target_label->objectName());
			target_label->setText(start_label->text());
			start_label->setText("");
			Figuren[target] = Figuren[currentSelection];
			Figuren[target]->bewegen(target);
			Figuren.remove(currentSelection);

			recalculateMoves();
			round++;
		}
	}
}

void Qt_Schach::moveCurrentSelection(cQlabel* ziel)
{
	movePieceToTarget(currentSelection, Coord(ziel->objectName()), true); //test false, release true
}

void Qt_Schach::recalculateMoves()
{
	recalculate(Figuren);
}

bool Qt_Schach::isInCheck(Farbe col)
{
	std::shared_ptr<King> king{};
	for (auto i: Figuren)
	{
		king = std::dynamic_pointer_cast<King>(i);
		if (king != nullptr && king->getFarbe() == col)
		{
			break;
		}
	}

	for (auto i: Figuren)
	{
		for (auto j: i->possibleMoves())
		{
			if (j == king->getPos())
			{
				return true;
			}
		}
	}

	return false;
}

bool Qt_Schach::checkForCheckMate()
{
	if (isInCheck(Farbe::white))
	{

	}

	return false;
}
