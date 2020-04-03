#include "misc.h"

bool operator==(Coord _left, Coord _right)
{
	return _left.x == _right.x && _left.y == _right.y;
}

bool operator!=(Coord _left, Coord _right)
{
	return !(_left == _right);
}

bool operator==(QChar _char, Piece _piece)
{
	return _char == static_cast<char16_t>(_piece);
}

Coord::Coord()
{
	x = 0;
	y = 0;
}

Coord::Coord(int _x, int _y) : x(_x), y(_y)
{

}

Coord::Coord(QString _input) //makes valid coordinates if l_a_1 format or h_5 format
{
	switch (_input.length())
	{
	case 5:
		_input.remove(0, 2);
	case 3:
		if ((_input.at(0).unicode() <= 104 || _input.at(0).unicode() >= 97) && (_input.at(2).unicode() >= 49 || _input.at(2).unicode() <= 56)) //a-h & 1-8
		{
			y = _input.at(0).unicode() - 96;
			x = _input.at(2).unicode() - 48;
			break;
		}
	default:
		x = 0; y = 0;
		break;
	}
}

QString Coord::toLabelName()
{
	if (x > 0 && y > 0)
		return QString("l_") + QChar(y + 96) + QString("_") + QChar(x + 48);
	else
		return QString("");
}
