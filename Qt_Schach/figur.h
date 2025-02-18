#pragma once

#include <QObject>
#include <QMap>
#include <QDebug>

#include "misc.h"

class Figur : public QObject
{
	Q_OBJECT

public:
	Figur(QObject *parent, Farbe _farbe);
	Figur(QObject* parent, Farbe _farbe, Coord _pos);
	virtual void bewegen(Coord ziel) = 0;
	virtual void calculateMoves(QMap<Coord, std::shared_ptr<Figur>> listOfFigures, int depth = 0) = 0;
	virtual QVector<Coord> possibleMoves();
	virtual Coord getPos();
	virtual void setPos(Coord);
	virtual Farbe getFarbe();
	virtual Piece getPiece() = 0;
protected:
	Farbe farbe;
	Coord position;
	QVector<Coord> moves;
};
