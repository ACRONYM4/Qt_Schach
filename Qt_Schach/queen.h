#pragma once

#include "figur.h"
#include "check.h"

class Queen : public Figur
{
	Q_OBJECT

public:
	Queen(QObject* parent, Farbe _f);
	Queen(QObject* parent, Farbe _farbe, Coord _pos);
	~Queen();
	virtual void bewegen(Coord ziel) override;
	virtual void calculateMoves(QMap<Coord, std::shared_ptr<Figur>> listOfFigures, int depth = 0) override;
	virtual Piece getPiece() override;
private:
	bool start = true;
};
