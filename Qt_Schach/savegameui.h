#pragma once

#include <QDialog>
#include "misc.h"
#include "ui_savegameui.h"
#include "C:\Program Files\MariaDB\MariaDB Connector C 64-bit\include\mysql.h"

class saveGameUi : public QDialog
{
	Q_OBJECT

public:
	saveGameUi(QWidget *parent = Q_NULLPTR);
	~saveGameUi();
	int getId();
	bool getAccepted();
	QString getComments();
public slots:
	void accepted();
	void rejected();
	void changeID(int row, int col);
protected:
	Ui::saveGameUi ui;
	int id = -1;
	bool accept = false;
	QString comments;
};
