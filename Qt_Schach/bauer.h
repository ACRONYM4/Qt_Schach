#pragma once

#include "figur.h"

class Bauer : public Figur
{
	Q_OBJECT

public:
	Bauer(QObject *parent, Farbe _f);
	~Bauer();
	virtual void bewegen(Coord ziel) override;
	virtual QVector<Coord> possibleMoves() override;
private:
	bool start;
};
