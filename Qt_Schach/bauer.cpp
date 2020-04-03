#include "bauer.h"

Bauer::Bauer(QObject *parent, Farbe _f)
	: Figur(parent, _f)
{
	start = false;
}

Bauer::~Bauer()
{
}

void Bauer::bewegen(Coord ziel)
{
	//todo: validate?
	position = ziel;
}

QVector<Coord> Bauer::possibleMoves()
{
	return QVector<Coord> { {1, 2}, { 1,5 }};
}
