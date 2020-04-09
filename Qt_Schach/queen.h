#pragma once

#include "figur.h"

class Queen : public Figur
{
	Q_OBJECT

public:
	Queen(QObject* parent, Farbe _f);
	Queen(QObject* parent, Farbe _farbe, Coord _pos);
	~Queen();
	virtual void bewegen(Coord ziel) override;
	virtual void calculateMoves(QMap<Coord, Figur*> listOfFigures) override;
private:
	bool start = true;
};
