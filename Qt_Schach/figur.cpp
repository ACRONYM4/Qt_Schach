#include "figur.h"

Figur::Figur(QObject *parent, Farbe _farbe) : QObject(parent)
{
	farbe = _farbe;
	position = { 0,0 };
}

Figur::Figur(QObject* parent, Farbe _farbe, Coord _pos) : QObject(parent)
{
	farbe = _farbe;
	position = _pos;
}

Figur::~Figur()
{
}

Coord Figur::getPos()
{
	return position;
}

void Figur::setPos(Coord _p)
{
	position = _p;
}

Farbe Figur::getFarbe()
{
	return farbe;
}
