#include "check.h"

QMap<Coord, std::shared_ptr<Figur>> createTempMap(QMap<Coord, std::shared_ptr<Figur>> listOfFigures)
{
	QMap<Coord, std::shared_ptr<Figur>> temp;
	for (auto i : listOfFigures)
	{
		std::shared_ptr<Pawn> p = std::dynamic_pointer_cast<Pawn>(i);
		if (p != nullptr)
		{
			auto temp_f = std::make_shared<Pawn>(nullptr, p->getFarbe(), p->getPos());
			temp_f->setStart(p->getStart());
			temp[i->getPos()] = temp_f;
			continue;
		}

		std::shared_ptr<Rook> r = std::dynamic_pointer_cast<Rook>(i);
		if (r != nullptr)
		{
			auto temp_f = std::make_shared<Rook>(nullptr, r->getFarbe(), r->getPos());
			temp_f->setStart(r->getStart());
			temp[i->getPos()] = temp_f;
			continue;
		}

		std::shared_ptr<Queen> q = std::dynamic_pointer_cast<Queen>(i);
		if (q != nullptr)
		{
			temp[i->getPos()] = std::make_shared<Queen>(nullptr, q->getFarbe(), q->getPos());
			continue;
		}

		std::shared_ptr<Bishop> b = std::dynamic_pointer_cast<Bishop>(i);
		if (b != nullptr)
		{
			temp[i->getPos()] = std::make_shared<Bishop>(nullptr, b->getFarbe(), b->getPos());
			continue;
		}

		std::shared_ptr<Knight> n = std::dynamic_pointer_cast<Knight>(i);
		if (n != nullptr)
		{
			temp[i->getPos()] = std::make_shared<Knight>(nullptr, n->getFarbe(), n->getPos());
			continue;
		}

		std::shared_ptr<King> k = std::dynamic_pointer_cast<King>(i);
		if (k != nullptr)
		{
			auto temp_f = std::make_shared<King>(nullptr, k->getFarbe(), k->getPos());
			temp_f->setStart(k->getStart());
			temp[i->getPos()] = temp_f;
			continue;
		}
	}
	return temp;
}

QMap<Coord, std::shared_ptr<Figur>> tempMove(Coord start, Coord target, QMap<Coord, std::shared_ptr<Figur>> listOfFigures, int depth)
{
	QMap<Coord, std::shared_ptr<Figur>> temp = createTempMap(listOfFigures);
	depth++;
	if (listOfFigures.find(start) != listOfFigures.end())
	{
		temp[target] = temp[start];
		temp[target]->bewegen(target);
		temp.remove(start);
		recalculate(temp, depth);
	}
	return temp;
}

bool isCheck(QMap<Coord, std::shared_ptr<Figur>> listOfFigures, Farbe col)
{
	std::shared_ptr<King> king{};
	for (auto i : listOfFigures)
	{
		king = std::dynamic_pointer_cast<King>(i);
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

//void recalculate(QMap<Coord, std::shared_ptr<Figur>>& listOfFigures)
//{
//	for (auto i : listOfFigures)
//	{
//		i->calculateMoves(listOfFigures);
//	}
//}

void recalculate(QMap<Coord, std::shared_ptr<Figur>>& listOfFigures, int depth)
{
	for (auto i : listOfFigures)
	{
		i->calculateMoves(listOfFigures, depth);
	}
}
