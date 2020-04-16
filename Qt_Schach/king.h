#pragma once

#include "figur.h"
#include "rook.h"
#include "check.h"

class King : public Figur
{
	Q_OBJECT

public:
	King(QObject* parent, Farbe _farbe);
	King(QObject* parent, Farbe _farbe, Coord _pos);
	~King();
	virtual void bewegen(Coord ziel) override;
	virtual void calculateMoves(QMap<Coord, std::shared_ptr<Figur>> listOfFigures, int depth = 0) override;
	bool getStart();
	void setStart(bool);
	virtual Piece getPiece() override;
private:
	bool start = true;
};
