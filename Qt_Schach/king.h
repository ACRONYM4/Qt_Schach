#pragma once

#include "figur.h"
#include "rook.h"

class King : public Figur
{
	Q_OBJECT

public:
	King(QObject* parent, Farbe _farbe);
	King(QObject* parent, Farbe _farbe, Coord _pos);
	~King();
	virtual void bewegen(Coord ziel) override;
	virtual QVector<Coord> possibleMoves(QMap<Coord, Figur*> listOfFigures) override;
	void setPos(Coord) override;
private:
	bool start = true;
};
