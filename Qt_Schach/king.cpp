#include "king.h"

King::King(QObject* parent, Farbe _farbe, Coord _pos) : Figur(parent, _farbe, _pos)
{
}

King::~King()
{
}

void King::bewegen(Coord ziel)
{
	position = ziel;
	start = false;
}

//test
QVector<Coord> King::possibleMoves(QMap<Coord, Figur*> listOfFigures)//todo: remove illegal moves e.g: mate, protection ect.
{
	QVector<Coord> listOfMoves;
	Coord step_up(0, 1);
	Coord step_right(1, 0);
	Coord step_up_right(1, 1);
	Coord step_up_left(-1, 1);

	if (listOfFigures.find(position + step_up) != listOfFigures.end() && listOfFigures[position + step_up]->getFarbe() == farbe)
	{
	}
	else
	{
		listOfMoves.push_back(position + step_up);
	}

	if (listOfFigures.find(position + step_right) != listOfFigures.end() && listOfFigures[position + step_right]->getFarbe() == farbe)
	{
	}
	else
	{
		listOfMoves.push_back(position + step_right);
	}

	if (listOfFigures.find(position + step_up_right) != listOfFigures.end() && listOfFigures[position + step_up_right]->getFarbe() == farbe)
	{
	}
	else
	{
		listOfMoves.push_back(position + step_up_right);
	}

	if (listOfFigures.find(position + step_up_left) != listOfFigures.end() && listOfFigures[position + step_up_left]->getFarbe() == farbe)
	{
	}
	else
	{
		listOfMoves.push_back(position + step_up_left);
	}

	if (listOfFigures.find(position + step_up * -1) != listOfFigures.end() && listOfFigures[position + step_up * -1]->getFarbe() == farbe)
	{
	}
	else
	{
		listOfMoves.push_back(position + step_up * -1);
	}

	if (listOfFigures.find(position + step_right * -1) != listOfFigures.end() && listOfFigures[position + step_right * -1]->getFarbe() == farbe)
	{
	}
	else
	{
		listOfMoves.push_back(position + step_right * -1);
	}

	if (listOfFigures.find(position + step_up_right * -1) != listOfFigures.end() && listOfFigures[position + step_up_right * -1]->getFarbe() == farbe)
	{
	}
	else
	{
		listOfMoves.push_back(position + step_up_right * -1);
	}

	if (listOfFigures.find(position + step_up_left * -1) != listOfFigures.end() && listOfFigures[position + step_up_left * -1]->getFarbe() == farbe)
	{
	}
	else
	{
		listOfMoves.push_back(position + step_up_left * -1);
	}

	if (start)
	{
		if (listOfFigures.find(Coord(1, position.y)) != listOfFigures.end())
		{
			Rook* rook = dynamic_cast<Rook*>(listOfFigures[Coord(1, position.y)]);
			if (rook != nullptr && rook->getStart())
			{
				bool free = true;
				int i = 0;
				while (free && i++ < 3)
				{
					if (listOfFigures.find(Coord(position.x - i, position.y)) != listOfFigures.end())
						free = false;
				}
				if (free)
				{
					listOfMoves.push_back(Coord(1, position.y));
				}
			}
		}
		if (listOfFigures.find(Coord(8, position.y)) != listOfFigures.end())
		{
			Rook* rook = dynamic_cast<Rook*>(listOfFigures[Coord(8, position.y)]);
			if (rook != nullptr && rook->getStart())
			{
				bool free = true;
				int i = 0;
				while (free && i++ < 2)
				{
					if (listOfFigures.find(Coord(position.x + i, position.y)) != listOfFigures.end())
						free = false;
				}
				if (free)
				{
					listOfMoves.push_back(Coord(8, position.y));
				}
			}
		}
	}

	return listOfMoves;
}

void King::setPos(Coord)
{
}
