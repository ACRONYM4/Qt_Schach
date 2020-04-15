#pragma once

#include <QtWidgets/QMainWindow>
#include <QRegularExpression>
#include <QKeyEvent>
#include <QMessageBox>
#include "ui_qt_schach.h"

#include "promotiondialog.h"
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
	QMap<Coord, std::shared_ptr<Figur>> Figuren;
	bool isLegalMove(Coord start, Coord target);
	bool isLegalMove(Coord start, Coord target, QMap<Coord, std::shared_ptr<Figur>>);
	bool movePieceToTarget(Coord start, Coord target, bool legal = true);
	bool moveCurrentSelection(cQlabel* ziel, bool legal = true);
	void recalculateMoves();
	bool isInCheck(Farbe col);
	bool checkForCheckMate();
	bool isCastling(Coord start, Coord target);
	Farbe currentPlayer();
	bool isPromotion(Coord start, Coord target);
	unsigned int round = 0;
};
