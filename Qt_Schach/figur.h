#pragma once

#include <QObject>
#include <QMap>

#include "misc.h"

class Figur : public QObject
{
	Q_OBJECT

public:
	Figur(QObject *parent, Farbe _farbe);
	Figur(QObject* parent, Farbe _farbe, Coord _pos);
	//Figur(const Figur&);
	virtual ~Figur();
	virtual void bewegen(Coord ziel) = 0;
	virtual QVector<Coord> possibleMoves(QMap<Coord, Figur*> listOfFigures) = 0;
	virtual Coord getPos();
	virtual void setPos(Coord);
	virtual Farbe getFarbe();
protected:
	Farbe farbe;
	Coord position;
};
