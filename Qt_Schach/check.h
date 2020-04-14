#pragma once
#include "misc.h"

#include "pawn.h"
#include "rook.h"
#include "bishop.h"
#include "queen.h"
#include "knight.h"
#include "king.h"

QMap<Coord, std::shared_ptr<Figur>> createTempMap(QMap<Coord, std::shared_ptr<Figur>> listOfFigures);
QMap<Coord, std::shared_ptr<Figur>> tempMove(Coord start, Coord target, QMap<Coord, std::shared_ptr<Figur>> listOfFigures, int depth = 0);
bool isCheck(QMap<Coord, std::shared_ptr<Figur>> listOfFigures, Farbe col);//color of the current player -> don't check for opposing player
//void recalculate(QMap<Coord, std::shared_ptr<Figur>>& listOfFigures);
void recalculate(QMap<Coord, std::shared_ptr<Figur>>& listOfFigures, int depth = 0);