#pragma once
#include "misc.h"

#include "pawn.h"
#include "rook.h"
#include "bishop.h"
#include "queen.h"
#include "knight.h"
#include "king.h"

QMap<Coord, Figur*> createTempMap(QMap<Coord, Figur*> listOfFigures);
QMap<Coord, Figur*> tempMove(Coord start, Coord target, QMap<Coord, Figur*> listOfFigures);
bool isCheck(QMap<Coord, Figur*> listOfFigures, Farbe col);//color of the current player -> don't check for opposing player
void recalculate(QMap<Coord, Figur*>& listOfFigures);
void recalculateKingless(QMap<Coord, Figur*>& listOfFigures);