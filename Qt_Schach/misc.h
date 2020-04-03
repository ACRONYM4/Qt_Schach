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
};

bool operator ==(Coord, Coord);
bool operator !=(Coord, Coord);

enum class Farbe
{
	white,
	black
};
/*
const QString white_pawn = u8"\x2659";
const QString white_bishop = u8"\x2657";
const QString white_knight = u8"\x2658";
const QString white_rook = u8"\x2656";
const QString white_king = u8"\x2654";
const QString white_quenn = u8"\x2655";
const QString black_pawn = u8"\x265F";
const QString black_bishop = u8"\x265D";
const QString black_knight = u8"\x265E";
const QString black_rook = u8"\x265C";
const QString black_king = u8"\x265A";
const QString black_quenn = u8"\x265B";
*/
enum class Piece : char16_t
{
	white_pawn = u'\x2659',
	white_bishop = u'\x2657',
	white_knight = u'\x2658',
	white_rook = u'\x2656',
	white_king = u'\x2654',
	white_quenn = u'\x2655',
	black_pawn = u'\x265F',
	black_bishop = u'\x265D',
	black_knight = u'\x265E',
	black_rook = u'\x265C',
	black_king = u'\x265A',
	black_quenn = u'\x265B'
};

bool operator == (QChar _char, Piece _piece);