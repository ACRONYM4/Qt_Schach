#pragma once

#include "figur.h"
#include "check.h"

class Bishop : public Figur
{
	Q_OBJECT

public:
	Bishop(QObject* parent, Farbe _f);
	Bishop(QObject* parent, Farbe _farbe, Coord _pos);
	~Bishop();
	virtual void bewegen(Coord ziel) override;
	virtual void calculateMoves(QMap<Coord, std::shared_ptr<Figur>> listOfFigures, int depth = 0) override;
private:
	bool start = true;
};
