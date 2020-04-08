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

QVector<Coord> Pawn::possibleMoves(QMap<Coord, Figur*> listOfFigures)
{
	QVector<Coord> listOfMoves;
	Coord step = Coord(0, 1 * (farbe == Farbe::white ? 1: -1));

	if (listOfFigures.find(position + step) == listOfFigures.end())
	{
		listOfMoves.push_back(position + step);
		if (!start || listOfFigures.find(position + step * 2) != listOfFigures.end() && listOfFigures[position + step * 2]->getFarbe() == farbe)
		{
		}
		else
		{
			listOfMoves.push_back(position + step * 2);
		}
	}
	else
	{
		if (listOfFigures[position + step]->getFarbe() != farbe)
		{
			listOfMoves.push_back(position + step);
		}
	}

	return listOfMoves;
}
