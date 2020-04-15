#include "pawn.h"

Pawn::Pawn(QObject *parent, Farbe _farbe) : Figur(parent, _farbe)
{
}

Pawn::Pawn(QObject* parent, Farbe _farbe, Coord _pos) : Figur(parent, _farbe, _pos)
{
}

Pawn::~Pawn()
{
}

void Pawn::bewegen(Coord ziel)
{
	//todo: validate?
	position = ziel;
	start = false;
}

void Pawn::calculateMoves(QMap<Coord, std::shared_ptr<Figur>> listOfFigures, int depth)
{
	QVector<Coord> listOfMoves;
	Coord step_up = Coord(0, 1 * (farbe == Farbe::white ? 1: -1));
	Coord step_left_up = Coord(-1, 1 * (farbe == Farbe::white ? 1 : -1));
	Coord step_right_up = Coord(1, 1 * (farbe == Farbe::white ? 1 : -1));

	if (listOfFigures.find(position + step_up) == listOfFigures.end())
	{
		listOfMoves.push_back(position + step_up);
		if (!start || listOfFigures.find(position + step_up * 2) != listOfFigures.end())
		{
		}
		else
		{
			listOfMoves.push_back(position + step_up * 2);
		}
	}

	if (listOfFigures.find(position + step_left_up) != listOfFigures.end() && listOfFigures[position + step_left_up]->getFarbe() != farbe)
	{
		listOfMoves.push_back(position + step_left_up);
	}

	if (listOfFigures.find(position + step_right_up) != listOfFigures.end() && listOfFigures[position + step_right_up]->getFarbe() != farbe)
	{
		listOfMoves.push_back(position + step_right_up);
	}

	auto i = listOfMoves.begin();
	while (i != listOfMoves.end() && depth < maxDepth)
	{
		auto temp = tempMove(position, *i, listOfFigures, depth);
		if (isCheck(temp, farbe) || !(i->isValid()))
		{
			listOfMoves.erase(i);
		}
		else
		{
			i++;
		}
		temp.clear();
	}

	moves = listOfMoves;
}

void Pawn::setStart(bool b)
{
	start = b;
}

bool Pawn::getStart()
{
	return start;
}
