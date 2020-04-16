#pragma once

#include "figur.h"
#include "check.h"

class Pawn : public Figur
{
	Q_OBJECT

public:
	Pawn(QObject *parent, Farbe _farbe);
	Pawn(QObject* parent, Farbe _farbe, Coord _pos);
	~Pawn();
	virtual void bewegen(Coord ziel) override;
	virtual void calculateMoves(QMap<Coord, std::shared_ptr<Figur>> listOfFigures, int depth = 0) override;
	void setStart(bool);
	bool getStart();
	virtual Piece getPiece() override;
private:
	bool start = true;
};
