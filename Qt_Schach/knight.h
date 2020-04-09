#pragma once

#include "figur.h"

class Knight : public Figur
{
	Q_OBJECT

public:
	Knight(QObject* parent, Farbe _farbe);
	Knight(QObject* parent, Farbe _farbe, Coord _pos);
	~Knight();
	virtual void bewegen(Coord ziel) override;
	virtual void calculateMoves(QMap<Coord, Figur*> listOfFigures) override;
};
