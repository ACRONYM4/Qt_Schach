#pragma once

#include "figur.h"
#include "check.h"

class Rook : public Figur
{
	Q_OBJECT

public:
	Rook(QObject *parent, Farbe _f);
	Rook(QObject* parent, Farbe _farbe, Coord _pos);
	Rook(QObject* parent, Farbe _farbe, Coord _pos, bool _start);
	~Rook();
	virtual void bewegen(Coord ziel) override;
	virtual void calculateMoves(QMap<Coord, std::shared_ptr<Figur>> listOfFigures, int depth = 0) override;
	bool getStart();
	void setStart(bool);
	virtual Piece getPiece() override;
private:
	bool start = true;
};
