#pragma once

#include <QtWidgets/QMainWindow>
#include <QRegularExpression>
#include <QKeyEvent>
#include "ui_qt_schach.h"

#include "pawn.h"
#include "rook.h"
#include "bishop.h"
#include "queen.h"
#include "knight.h"
#include "king.h"

class Qt_Schach : public QMainWindow
{
	Q_OBJECT

public:
	Qt_Schach(QWidget *parent = Q_NULLPTR);

public slots:
	void exit();
	void clickedLabel();
private:
	Ui::Qt_SchachClass ui;
protected:
	Coord currentSelection = Coord::empty();
	void keyPressEvent(QKeyEvent* _event);
	QMap<Coord, Figur*> Figuren;
	bool isLegalMove(Coord start, Coord target);
	bool isLegalMove(Coord start, Coord target, QMap<Coord, Figur*>&);
	void movePieceToTarget(Coord start, Coord target, bool legal = true);
	void moveCurrentSelection(cQlabel* ziel);
	void recalculateMoves();
	QMap<Coord, Figur*> tempMove(Coord start, Coord target);
	bool isInCheck(Farbe col);
	bool checkForCheckMate();
	unsigned int round = 0;
};
