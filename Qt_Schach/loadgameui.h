#pragma once

#include <QDialog>
#include "misc.h"
#include "ui_loadgameui.h"
#include "C:\Program Files\MariaDB\MariaDB Connector C 64-bit\include\mysql.h"

class LoadGameUI : public QDialog
{
	Q_OBJECT

public:
	LoadGameUI(QWidget *parent = Q_NULLPTR);
	~LoadGameUI();
	int getId();
	bool getAccepted();
public slots:
	void accepted();
	void rejected();
	void changeID(int row, int col);
private:
	Ui::LoadGameUI ui;
	int id = -1;
	bool accept = false;
};
