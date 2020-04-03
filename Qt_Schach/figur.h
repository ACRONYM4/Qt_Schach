#pragma once

#include <QObject>
#include <QVector>

#include "misc.h"

class Figur : public QObject
{
	Q_OBJECT

public:
	Figur(QObject *parent, Farbe f);
	~Figur();
	virtual void bewegen(Coord ziel) = 0;
	virtual QVector<Coord> possibleMoves() = 0;
	virtual Coord getPos();
	virtual void setPos(Coord);
	virtual Farbe getFarbe();
protected:
	Farbe farbe;
	Coord position;
};
