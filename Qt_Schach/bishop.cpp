#include "Bishop.h"

Bishop::Bishop(QObject* parent, Farbe _f) : Figur(parent, _f)
{
}

Bishop::Bishop(QObject* parent, Farbe _farbe, Coord _pos) : Figur(parent, _farbe, _pos)
{
}

Bishop::~Bishop()
{
}

void Bishop::bewegen(Coord ziel)
{
	//todo: validate?
	position = ziel;
}

QVector<Coord> Bishop::possibleMoves(QMap<Coord, Figur*> listOfFigures)
{
	QVector<Coord> listOfMoves;
	Coord step_vertical = Coord(1, 1);
	Coord step_horizontal = Coord(1, -1);
	bool up = true;
	bool down = true;
	bool left = true;
	bool right = true;

	for (int i = 1; i < 8; i++)
	{
		if (up)
		{
			if (listOfFigures.find(position + step_horizontal * i) == listOfFigures.end())
			{
				listOfMoves.push_back(position + step_horizontal * i);
			}
			else
			{
				if (listOfFigures[position + step_horizontal * i]->getFarbe() != farbe)
				{
					listOfMoves.push_back(position + step_horizontal * i);
				}
				up = false;
			}
		}

		if (down)
		{
			if (listOfFigures.find(position - (step_horizontal * i)) == listOfFigures.end())
			{
				auto test = position - (step_horizontal * i);
				listOfMoves.push_back(position - step_horizontal * i);
			}
			else
			{
				if (listOfFigures[position - (step_horizontal * i)]->getFarbe() != farbe)
				{
					listOfMoves.push_back(position - step_horizontal * i);
				}
				down = false;
			}
		}

		if (right)
		{
			if (listOfFigures.find(position + step_vertical * i) == listOfFigures.end())
			{
				listOfMoves.push_back(position + step_vertical * i);
			}
			else
			{
				if (listOfFigures[position + step_vertical * i]->getFarbe() != farbe)
				{
					listOfMoves.push_back(position + step_vertical * i);
				}
				right = false;
			}
		}

		if (left)
		{
			if (listOfFigures.find(position - (step_vertical * i)) == listOfFigures.end())
			{
				listOfMoves.push_back(position - (step_vertical * i));
			}
			else
			{
				if (listOfFigures[position - (step_vertical * i)]->getFarbe() != farbe)
				{
					listOfMoves.push_back(position - (step_vertical * i));
				}
				left = false;
			}
		}
		if (!(up || down || left || right))
			break;
	}

	return listOfMoves;
}
