#include "queen.h"

Queen::Queen(QObject* parent, Farbe _f) : Figur(parent, _f)
{
}

Queen::Queen(QObject* parent, Farbe _farbe, Coord _pos) : Figur(parent, _farbe, _pos)
{
}

Queen::~Queen()
{
}

void Queen::bewegen(Coord ziel)
{
	//todo: validate?
	position = ziel;
}

void Queen::calculateMoves(QMap<Coord, std::shared_ptr<Figur>> listOfFigures, int depth)
{
	QVector<Coord> listOfMoves;
	Coord step_vertical = Coord(1, 0);
	Coord step_horizontal = Coord(0, 1);
	Coord step_up_left = Coord(-1, 1);
	Coord step_up_right = Coord(1, 1);
	bool up = true;
	bool up_right = true;
	bool up_left = true;
	bool down = true;
	bool down_right = true;
	bool down_left = true;
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

		if (up_left)
		{
			if (listOfFigures.find(position + step_up_left * i) == listOfFigures.end())
			{
				listOfMoves.push_back(position + step_up_left * i);
			}
			else
			{
				if (listOfFigures[position + step_up_left * i]->getFarbe() != farbe)
				{
					listOfMoves.push_back(position + step_up_left * i);
				}
				up_left = false;
			}
		}

		if (up_right)
		{
			if (listOfFigures.find(position + step_up_right * i) == listOfFigures.end())
			{
				listOfMoves.push_back(position + step_up_right * i);
			}
			else
			{
				if (listOfFigures[position + step_up_right * i]->getFarbe() != farbe)
				{
					listOfMoves.push_back(position + step_up_right * i);
				}
				up_right = false;
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

		if (down_right)
		{
			if (listOfFigures.find(position - step_up_left * i) == listOfFigures.end())
			{
				listOfMoves.push_back(position - step_up_left * i);
			}
			else
			{
				if (listOfFigures[position - step_up_left * i]->getFarbe() != farbe)
				{
					listOfMoves.push_back(position - step_up_left * i);
				}
				down_right = false;
			}
		}

		if (down_left)
		{
			if (listOfFigures.find(position - step_up_right * i) == listOfFigures.end())
			{
				listOfMoves.push_back(position - step_up_right * i);
			}
			else
			{
				if (listOfFigures[position - step_up_right * i]->getFarbe() != farbe)
				{
					listOfMoves.push_back(position - step_up_right * i);
				}
				down_left = false;
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
		if (!(up || down || left || right || up_left || up_right || down_left || down_right))
			break;
	}

	auto i = listOfMoves.begin();
	while (i != listOfMoves.end() && depth < maxDepth)
	{
		auto temp = tempMove(position, *i, listOfFigures, depth);
		if (isCheck(temp, farbe))
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
