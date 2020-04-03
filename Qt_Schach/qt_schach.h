#pragma once

#include <QtWidgets/QMainWindow>
#include <QRegularExpression>
#include "ui_qt_schach.h"
#include "bauer.h"

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
};
