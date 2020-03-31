#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qt_schach.h"

class Qt_Schach : public QMainWindow
{
	Q_OBJECT

public:
	Qt_Schach(QWidget *parent = Q_NULLPTR);

private:
	Ui::Qt_SchachClass ui;
};
