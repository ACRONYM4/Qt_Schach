#include "misc.h"

bool operator==(Coord _left, Coord _right)
{
	return (_left.x == _right.x) && (_left.y == _right.y);
}

bool operator!=(Coord _left, Coord _right)
{
	return !(_left == _right);
}

Coord operator+(Coord _left, Coord _right)
{
	return _left += _right;
}

Coord operator-(Coord _left, Coord _right)
{
	return _left -= _right;
}

bool operator<(Coord _l, Coord _r)
{
	if ((_l.x < _r.x) && (_l.y < _r.y))
	{
		return true;
	}
	if ((_l.x > _r.x) && (_l.y > _r.y))
	{
		return false;
	}
	double l = _l.x + static_cast<long>(_l.y) * 10.0;//sqrt(_l.x * _l.x + _l.y * _l.y);
	double r = _r.x + static_cast<long>(_r.y) * 10.0;//sqrt(_r.x * _r.x + _r.y * _r.y);
	bool test1 = l < r;
	bool test2 = (_l.x - _r.x) < (_l.y - _r.y);
	if (/*(_l.x - _r.x) < (_l.y - _r.y)*/l < r)
	{
		return true;
	}
	else
	{
		return false;
	}
	//return (_l.x < _r.x) || (_l.y < _r.y);
}

bool operator>(Coord _l, Coord _r)
{
	return _r < _l;
}

Coord operator*(Coord _l, int _r)
{
	return _l *= _r;
}

Coord operator*(int _l, Coord _r)
{
	return _r *= _l;
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
			x = _input.at(0).unicode() - 96;
			y = _input.at(2).unicode() - 48;
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
		return QString("l_") + QChar(x + 96) + QString("_") + QChar(y + 48);
	else
		return QString("");
}

Coord& Coord::operator+=(const Coord& _right)
{
	x += _right.x;
	y += _right.y;
	/*if (x > 8 || x < 0)
		x = 0;
	if (y > 8 || y < 0)
		y = 0;*/
	return *this;
}

Coord& Coord::operator*=(const int& _r)
{
	x *= _r;
	y *= _r;
	return *this;
}

Coord& Coord::operator-=(const Coord& _right)
{
	x -= _right.x;
	y -= _right.y;
	return *this;
}
