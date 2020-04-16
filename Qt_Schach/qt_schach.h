#pragma once

#include <QtWidgets/QMainWindow>
#include <QRegularExpression>
#include <QKeyEvent>
#include <QMessageBox>
#include <QVector>
#include <QFileDialog>
#include <QtSql/qsqldatabase.h>

#include <fstream>
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
	void save();
	void load();
	void saveToDatabank();
private:
	Ui::Qt_SchachClass ui;
protected:
	Coord currentSelection = Coord::empty();
	QMap<Coord, std::shared_ptr<Figur>> Figuren;
	unsigned int round = 0;
	QVector<QString> game;

	void resetField();
	void keyPressEvent(QKeyEvent* _event);
	bool isLegalMove(Coord start, Coord target);
	bool isLegalMove(Coord start, Coord target, QMap<Coord, std::shared_ptr<Figur>>);
	void movePieceToTarget(Coord start, Coord target, bool calc = true);
	void moveCurrentSelection(cQlabel* ziel);
	void recalculateMoves();
	bool checkForCheckMate(bool nextPlayer = false);
	bool checkForCheckMate(QMap<Coord, std::shared_ptr<Figur>> listOfFigures, bool nextPlayer = false);
	bool isCastling(Coord start, Coord target);
	Farbe currentPlayer();
	bool isPromotion(Coord start, Coord target);
	void promotePiece(Coord c, Piece p);
	void promoteTempPiece(Coord c, Piece p, QMap<Coord, std::shared_ptr<Figur>> listOfFigures);
	void saveRound(Piece, Coord start, Coord target, QVector<TurnType> types, Piece promotion = Piece::none);
	QVector<TurnType> getTurnTypes(Coord start, Coord target, Piece promo);
	Piece getPieceAtCoord(Coord c);
	Piece getPieceFormType(Coord c);
	void nextRound();
};
