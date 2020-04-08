#pragma once

#include "figur.h"

class Pawn : public Figur
{
	Q_OBJECT

public:
	Pawn(QObject *parent, Farbe _farbe);
	Pawn(QObject* parent, Farbe _farbe, Coord _pos);
	~Pawn();
	virtual void bewegen(Coord ziel) override;
	virtual QVector<Coord> possibleMoves(QMap<Coord, Figur*> listOfFigures) override;
private:
	bool start = true;
};
