#include "qt_schach.h"

Qt_Schach::Qt_Schach(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->statusBar()->setSizeGripEnabled(false);//disable resize
	setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);//disable resize #2

	connect(ui.actionExit, &QAction::triggered, this, &Qt_Schach::exit);//File->Exit action
	connect(ui.actionSave, &QAction::triggered, this, &Qt_Schach::save);
	connect(ui.actionLoad, &QAction::triggered, this, &Qt_Schach::load);
	for (auto i : findChildren<cQlabel*>(QRegExp("l_._.")))//connect all clickable cQlabels with function
	{
		connect(i, &cQlabel::clicked, this, &Qt_Schach::clickedLabel);
	}
	resetField();
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
			bool isPromo = isPromotion(currentSelection, Coord(_label->objectName()));
			Piece promoPiece = Piece::none;
			Piece currentPiece = getPieceAtCoord(currentSelection);
			Coord start = Coord::empty();
			Coord target = Coord::empty();
			bool promoAccept = true;
			if (isPromo)
			{
				PromotionDialog promotion(Figuren[currentSelection]->getFarbe());
				promotion.exec();
				promoAccept = promotion.getAccepted();
				if (promoAccept && promotion.getCurrentSelection() != Piece::none)
				{
					promoPiece = promotion.getCurrentSelection();
				}
				else
				{
					promoAccept = false;
				}
			}
			if (Figuren.find(currentSelection) != Figuren.end())
			{
				if (Figuren[currentSelection]->getFarbe() == currentPlayer() && promoAccept)
				{
					if (isLegalMove(currentSelection, Coord(_label->objectName())))
					{
						start = currentSelection;
						target = Coord(_label->objectName());
						saveRound(currentPiece, start, target, getTurnTypes(start, target), promoPiece);
						moveCurrentSelection(_label);
						if (isPromo)
						{
							promotePiece(target, promoPiece);
						}
					}

					//Ende des Zuges
					nextRound();
					if (checkForCheckMate())
					{
						QMessageBox::information(this, QString("Matt"), QString("Matt"));
					}
				}
			}

			for (auto i : findChildren<cQlabel*>(QRegExp("l_._.")))//deselect after valid/invalid move
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

void Qt_Schach::save()
{
	QFileDialog dia(this, QString(),QString(),QString());
	QString fileUrl = dia.getSaveFileName(this, QString(), QString(), tr("Saves (*.sav)"));
	std::ofstream save;
	save.open(fileUrl.toStdString());
	for (auto i: game)
	{
		save << i.toStdString() << std::endl;
	}
	save.close();
}

void Qt_Schach::load()
{
	QFileDialog dia(this, QString(), QString(), QString());
	QString fileUrl = dia.getOpenFileName(this, QString(), QString(), tr("Saves (*.sav)"));
	std::ifstream load;
	std::string line;
	load.open(fileUrl.toStdString());
	if (load.is_open())
	{
		resetField();
		while (std::getline(load, line))
		{
			auto l_line = QString::fromStdString(line).split(";");
			Coord start(l_line.at(1));
			Coord target(l_line.at(2));
			movePieceToTarget(start, target, false);
			if (l_line.at(3).contains(static_cast<char>(TurnType::promote)))
			{
				promotePiece(target, static_cast<Piece>(l_line.at(3).back().unicode()));
			}
			game.push_back(QString::fromStdString(line));
			nextRound();
		}
		recalculateMoves();
		load.close();
	}
}

void Qt_Schach::resetField()
{
	Figuren.clear();
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
		if (i == 2 || i == 7)
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

	for (auto i: findChildren<cQlabel*>())
	{
		i->setText("");
	}

	for (auto i : Figuren)
	{
		findChild<cQlabel*>(i->getPos().toLabelName())->setText(tr("").append(static_cast<char16_t>(getPieceFormType(i->getPos()))));
	}

	round = 0;
	game.clear();
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

bool Qt_Schach::isLegalMove(Coord start, Coord target, QMap<Coord, std::shared_ptr<Figur>> _f)
{
	if (_f.find(start) == _f.end())
		return false;
	for (auto i : _f[start]->possibleMoves())
		if (i == target)
			return true;
	return false;
}

void Qt_Schach::movePieceToTarget(Coord start, Coord target, bool calc)
{
	cQlabel* start_label = findChild<cQlabel*>(start.toLabelName());
	std::shared_ptr<Figur> start_figur = Figuren[start];
	cQlabel* target_label = findChild<cQlabel*>(target.toLabelName());

	if (start_label->text().length() && start_label != target_label)
	{
		if (isCastling(start, target))
		{
			Coord kingTarget;
			Coord rookTarget;
			if (target.x > 4)
			{
				kingTarget = Coord(7, target.y);
				rookTarget = Coord(6, target.y);
			}
			else
			{
				kingTarget = Coord(3, target.y);
				rookTarget = Coord(4, target.y);
			}
			//move King
			cQlabel* kingTargetLabel = findChild<cQlabel*>(kingTarget.toLabelName());

			kingTargetLabel->setText(start_label->text());
			start_label->setText("");
			Figuren[kingTarget] = Figuren[start];
			Figuren[kingTarget]->bewegen(kingTarget);
			Figuren.remove(start);

			//move Rook
			cQlabel* rookTargetLabel = findChild<cQlabel*>(rookTarget.toLabelName());

			rookTargetLabel->setText(target_label->text());
			target_label->setText("");
			Figuren[rookTarget] = Figuren[target];
			Figuren[rookTarget]->bewegen(rookTarget);
			Figuren.remove(target);
		}
		else
		{
			target_label->setText(start_label->text());
			start_label->setText("");
			Figuren[target] = Figuren[start];
			Figuren[target]->bewegen(target);
			Figuren.remove(start);
		}
		if(calc)
			recalculateMoves();
	}
}

void Qt_Schach::moveCurrentSelection(cQlabel* ziel)
{
	movePieceToTarget(currentSelection, Coord(ziel->objectName()));
}

void Qt_Schach::recalculateMoves()
{
	recalculate(Figuren);
}

bool Qt_Schach::checkForCheckMate(bool nextPlayer)
{
	return checkForCheckMate(Figuren, nextPlayer);
}

bool Qt_Schach::checkForCheckMate(QMap<Coord, std::shared_ptr<Figur>> listOfFigures, bool nextPlayer)
{
	std::shared_ptr<King> king{};
	Farbe player;
	if (nextPlayer)
	{
		player = !currentPlayer();
	}
	else
	{
		player = currentPlayer();
	}
	if (isCheck(listOfFigures, player))
	{
		for (auto i : listOfFigures)
		{
			king = std::dynamic_pointer_cast<King>(i);
			if (king != nullptr && king->getFarbe() == player)
			{
				break;
			}
		}
		if (king->possibleMoves().size() == 0)
		{
			return true;
		}
	}

	return false;
}

bool Qt_Schach::isCastling(Coord start, Coord target)
{
	std::shared_ptr<King> k = std::dynamic_pointer_cast<King>(Figuren[start]);
	if (k == nullptr)
	{
		return false;
	}
	std::shared_ptr<Rook> r = std::dynamic_pointer_cast<Rook>(Figuren[target]);
	if (k == nullptr)
	{
		return false;
	}

	if (k->getStart() && r->getStart())
	{
		return true;
	}
	return false;
}

Farbe Qt_Schach::currentPlayer()
{
	return Farbe(round % 2);
}

bool Qt_Schach::isPromotion(Coord start, Coord target)
{
	if (Figuren.find(start) != Figuren.end())
	{
		std::shared_ptr<Pawn> pawn = std::dynamic_pointer_cast<Pawn>(Figuren[start]);
		if (pawn != nullptr && target.y + int(pawn->getFarbe()) * 7 == 8)
		{
			return true;
		}
	}
	return false;
}

void Qt_Schach::promotePiece(Coord c, Piece p)
{
	switch (p)
	{
	case Piece::black_bishop:
		Figuren[c] = std::make_shared<Bishop>(nullptr, Farbe::black, c);
		findChild<cQlabel*>(c.toLabelName())->setText(QString(static_cast<char16_t>(Piece::black_bishop)));
		break;
	case Piece::black_knight:
		Figuren[c] = std::make_shared<Knight>(nullptr, Farbe::black, c);
		findChild<cQlabel*>(c.toLabelName())->setText(QString(static_cast<char16_t>(Piece::black_knight)));
		break;
	case Piece::black_rook:
		Figuren[c] = std::make_shared<Rook>(nullptr, Farbe::black, c, false);
		findChild<cQlabel*>(c.toLabelName())->setText(QString(static_cast<char16_t>(Piece::black_rook)));
		break;
	case Piece::black_queen:
		Figuren[c] = std::make_shared<Queen>(nullptr, Farbe::black, c);
		findChild<cQlabel*>(c.toLabelName())->setText(QString(static_cast<char16_t>(Piece::black_queen)));
		break;
	case Piece::white_bishop:
		Figuren[c] = std::make_shared<Bishop>(nullptr, Farbe::white, c);
		findChild<cQlabel*>(c.toLabelName())->setText(QString(static_cast<char16_t>(Piece::white_bishop)));
		break;
	case Piece::white_knight:
		Figuren[c] = std::make_shared<Knight>(nullptr, Farbe::white, c);
		findChild<cQlabel*>(c.toLabelName())->setText(QString(static_cast<char16_t>(Piece::white_knight)));
		break;
	case Piece::white_rook:
		Figuren[c] = std::make_shared<Rook>(nullptr, Farbe::white, c, false);
		findChild<cQlabel*>(c.toLabelName())->setText(QString(static_cast<char16_t>(Piece::white_rook)));
		break;
	case Piece::white_queen:
		Figuren[c] = std::make_shared<Queen>(nullptr, Farbe::white, c);
		findChild<cQlabel*>(c.toLabelName())->setText(QString(static_cast<char16_t>(Piece::white_queen)));
		break;
	}
	recalculateMoves();
}

void Qt_Schach::saveRound(Piece s_piece, Coord start, Coord target, QVector<TurnType> types, Piece promotion)
{
	QString round_string;
	round_string = round_string.append(static_cast<char16_t>(s_piece)).append(";");
	round_string = round_string.append(start.toShortName()).append(";");
	round_string = round_string.append(target.toShortName()).append(";");
	for (auto i : types)
	{
		round_string = round_string.append(static_cast<char>(i));
	}
	if (promotion != Piece::none)
	{
		round_string = round_string.append(static_cast<char16_t>(promotion));
	}
	round_string = round_string.append(";");

	game.push_back(round_string);
}

QVector<TurnType> Qt_Schach::getTurnTypes(Coord start, Coord target)
{
	QVector<TurnType> types;

	if (Figuren.find(target) != Figuren.end())
	{
		types.push_back(TurnType::capture);
	}
	auto temp = tempMove(start, target, Figuren);
	if (checkForCheckMate(temp, true))
	{
		types.push_back(TurnType::mate);
	}
	else
	{
		if (isCheck(temp, !(Figuren[start]->getFarbe())))
		{
			types.push_back(TurnType::check);
		}
	}
	if (isPromotion(start, target))
	{
		types.push_back(TurnType::promote);
	}

	return types;
}

Piece Qt_Schach::getPieceAtCoord(Coord c)
{
	if (findChild<cQlabel*>(c.toLabelName())->text().length())
		return static_cast<Piece>(findChild<cQlabel*>(c.toLabelName())->text().at(0).unicode());
	else
		return Piece::none;
}

Piece Qt_Schach::getPieceFormType(Coord c)
{
	if (Figuren.find(c) != Figuren.end())
	{
		return Figuren[c]->getPiece();
	}

	return Piece::none;
}

void Qt_Schach::nextRound()
{
	QPalette pal;
	round++;
	pal.setColor(QPalette::Window, QColor(255 - 255 * (round % 2), 255 - 255 * (round % 2), 255 - 255 * (round % 2)));
	for (auto i: findChildren<QLabel*>(QRegExp("label_color_.")))
	{

		i->setPalette(pal);
	}
}
