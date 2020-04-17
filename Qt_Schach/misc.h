#pragma once
#include <QString>
struct Coord
{
	int x; //1-8
	int y; //a-h
	const static Coord empty() { return { 0,0 }; };
	Coord();
	Coord(int, int);
	Coord(QString);
	QString toLabelName();
	QString toShortName();
	Coord& operator +=(const Coord&);
	Coord& operator *=(const int&);
	Coord& operator -=(const Coord&);
	bool isValid();
};

bool operator ==(Coord, Coord);
bool operator !=(Coord, Coord);
Coord operator +(Coord, Coord);
Coord operator -(Coord, Coord);
bool operator < (Coord, Coord);
bool operator > (Coord, Coord);
Coord operator *(Coord, int);
Coord operator *(int, Coord);

enum class Farbe
{
	white,
	black
};

Farbe operator ! (Farbe);

enum class Piece : char16_t
{
	none = u' ',
	white_pawn = u'\x2659',
	white_bishop = u'\x2657',
	white_knight = u'\x2658',
	white_rook = u'\x2656',
	white_king = u'\x2654',
	white_queen = u'\x2655',
	black_pawn = u'\x265F',
	black_bishop = u'\x265D',
	black_knight = u'\x265E',
	black_rook = u'\x265C',
	black_king = u'\x265A',
	black_queen = u'\x265B'
};

bool operator == (QChar _char, Piece _piece);

enum class Result
{
	winBlack,
	winWhite,
	draw,
	abort,
	save
};

const int maxDepth = 3;

enum class TurnType : char
{
	move = ' ',
	capture = 'x',
	promote = '=',
	check = '+',
	mate = '#'
};

const std::string hostname = "localhost"; // you must keep the quotes on all four items,  
const std::string username = "root"; // the function "mysql_real_connect" is looking for a char datatype,
const std::string passwd = ""; // without the quotes they're just an int.
const std::string db = "chess";