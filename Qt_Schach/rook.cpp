#include "rook.h"

Rook::Rook(QObject *parent, Farbe _f) : Figur(parent, _f)
{
}

Rook::Rook(QObject* parent, Farbe _farbe, Coord _pos) : Figur(parent, _farbe, _pos)
{
}

Rook::~Rook()
{
}

void Rook::bewegen(Coord ziel)
{
	//todo: validate?
	position = ziel;
	start = false;
}

void Rook::calculateMoves(QMap<Coord, std::shared_ptr<Figur>> listOfFigures, int depth)
{
	QVector<Coord> listOfMoves;
	Coord step_vertical = Coord(0, 1);
	Coord step_horizontal = Coord(1, 0);
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
			if (listOfFigures.find(position - step_horizontal * i) == listOfFigures.end())
			{
				listOfMoves.push_back(position - step_horizontal * i);
			}
			else
			{
				if (listOfFigures[position - step_horizontal * i]->getFarbe() != farbe)
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
			if (listOfFigures.find(position - step_vertical * i) == listOfFigures.end())
			{
				listOfMoves.push_back(position - step_vertical * i);
			}
			else
			{
				if (listOfFigures[position - step_vertical * i]->getFarbe() != farbe)
				{
					listOfMoves.push_back(position - step_vertical * i);
				}
				left = false;
			}
		}
		if (!(up || down || left || right))
			break;
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

bool Rook::getStart()
{
	return start;
}

void Rook::setStart(bool s)
{
	start = s;
}
