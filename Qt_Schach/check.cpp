#include "check.h"

QMap<Coord, Figur*> createTempMap(QMap<Coord, Figur*> listOfFigures)
{
	QMap<Coord, Figur*> temp;
	for (auto i : listOfFigures)
	{
		Pawn* p = dynamic_cast<Pawn*>(i);
		if (p != nullptr)
		{
			auto temp_f = new Pawn(nullptr, p->getFarbe(), p->getPos());
			temp_f->setStart(p->getStart());
			temp[i->getPos()] = temp_f;
			continue;
		}

		Rook* r = dynamic_cast<Rook*>(i);
		if (r != nullptr)
		{
			auto temp_f = new Rook(nullptr, r->getFarbe(), r->getPos());
			temp_f->setStart(r->getStart());
			temp[i->getPos()] = temp_f;
			continue;
		}

		Queen* q = dynamic_cast<Queen*>(i);
		if (q != nullptr)
		{
			temp[i->getPos()] = new Queen(nullptr, q->getFarbe(), q->getPos());
			continue;
		}

		Bishop* b = dynamic_cast<Bishop*>(i);
		if (b != nullptr)
		{
			temp[i->getPos()] = new Bishop(nullptr, b->getFarbe(), b->getPos());
			continue;
		}

		Knight* n = dynamic_cast<Knight*>(i);
		if (n != nullptr)
		{
			temp[i->getPos()] = new Knight(nullptr, n->getFarbe(), n->getPos());
			continue;
		}

		King* k = dynamic_cast<King*>(i);
		if (k != nullptr)
		{
			auto temp_f = new King(nullptr, k->getFarbe(), k->getPos());
			temp_f->setStart(k->getStart());
			temp[i->getPos()] = temp_f;
			continue;
		}
	}
	return temp;
}

QMap<Coord, Figur*> tempMove(Coord start, Coord target, QMap<Coord, Figur*> listOfFigures)
{
	QMap<Coord, Figur*> temp = createTempMap(listOfFigures);
	//temp = listOfFigures;
	if (listOfFigures.find(start) != listOfFigures.end())
	{
		temp[target] = temp[start];
		temp[target]->bewegen(target);
		temp.remove(start);
		recalculateKingless(temp);
	}
	return temp;
}

bool isCheck(QMap<Coord, Figur*> listOfFigures, Farbe col)
{
	King* king{};
	for (auto i : listOfFigures)
	{
		king = dynamic_cast<King*>(i);
		if (king != nullptr && king->getFarbe() == col)
		{
			break;
		}
	}

	for (auto i : listOfFigures)
	{
		if (i->getFarbe() != king->getFarbe())
		{
			for (auto j : i->possibleMoves())
			{
				if (king->getPos() == j)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void recalculate(QMap<Coord, Figur*>& listOfFigures)
{
	for (auto i : listOfFigures)
	{
		i->calculateMoves(listOfFigures);
	}
}

void recalculateKingless(QMap<Coord, Figur*>& listOfFigures)
{
	for (auto i : listOfFigures)
	{
		if(dynamic_cast<King*>(i) == nullptr)
			i->calculateMoves(listOfFigures);
	}
}
