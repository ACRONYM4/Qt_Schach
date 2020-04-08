#pragma once

#include "figur.h"

class Rook : public Figur
{
	Q_OBJECT

public:
	Rook(QObject *parent, Farbe _f);
	Rook(QObject* parent, Farbe _farbe, Coord _pos);
	~Rook();
	virtual void bewegen(Coord ziel) override;
	virtual QVector<Coord> possibleMoves(QMap<Coord, Figur*> listOfFigures) override;
private:
	bool start = true;
};
