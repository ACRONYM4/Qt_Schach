#include "knight.h"

Knight::Knight(QObject* parent, Farbe _farbe, Coord _pos) : Figur(parent, _farbe, _pos)
{
}

Knight::~Knight()
{
}

void Knight::bewegen(Coord ziel)
{
	//todo: validate?
	position = ziel;
}

void Knight::calculateMoves(QMap<Coord, Figur*> listOfFigures)
{
	QVector<Coord> listOfMoves;
	Coord step_up_up_left(1, 2);
	Coord step_up_up_right(-1, 2);
	Coord step_up_left_left(2, 1);
	Coord step_up_right_right(-2, 1);


	if (listOfFigures.find(position + step_up_up_left) != listOfFigures.end() && listOfFigures[position + step_up_up_left]->getFarbe() == farbe)
	{
	}
	else
	{
		listOfMoves.push_back(position + step_up_up_left);
	}

	if (listOfFigures.find(position + step_up_up_right) != listOfFigures.end() && listOfFigures[position + step_up_up_right]->getFarbe() == farbe)
	{
	}
	else
	{
		listOfMoves.push_back(position + step_up_up_right);
	}

	if (listOfFigures.find(position + step_up_left_left) != listOfFigures.end() && listOfFigures[position + step_up_left_left]->getFarbe() == farbe)
	{
	}
	else
	{
		listOfMoves.push_back(position + step_up_left_left);
	}

	if (listOfFigures.find(position + step_up_right_right) != listOfFigures.end() && listOfFigures[position + step_up_right_right]->getFarbe() == farbe)
	{
	}
	else
	{
		listOfMoves.push_back(position + step_up_right_right);
	}

	if (listOfFigures.find(position + step_up_up_left * -1) != listOfFigures.end() && listOfFigures[position + step_up_up_left * -1]->getFarbe() == farbe)
	{
	}
	else
	{
		listOfMoves.push_back(position + step_up_up_left * -1);
	}

	if (listOfFigures.find(position + step_up_up_right * -1) != listOfFigures.end() && listOfFigures[position + step_up_up_right * -1]->getFarbe() == farbe)
	{
	}
	else
	{
		listOfMoves.push_back(position + step_up_up_right * -1);
	}

	if (listOfFigures.find(position + step_up_left_left * -1) != listOfFigures.end() && listOfFigures[position + step_up_left_left * -1]->getFarbe() == farbe)
	{
	}
	else
	{
		listOfMoves.push_back(position + step_up_left_left * -1);
	}

	if (listOfFigures.find(position + step_up_right_right * -1) != listOfFigures.end() && listOfFigures[position + step_up_right_right * -1]->getFarbe() == farbe)
	{
	}
	else
	{
		listOfMoves.push_back(position + step_up_right_right * -1);
	}

	moves = listOfMoves;
}
