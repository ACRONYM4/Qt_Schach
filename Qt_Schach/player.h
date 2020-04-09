#pragma once

#include <QObject>
#include "misc.h"

class Player : public QObject
{
	Q_OBJECT

public:
	Player(QObject *parent, Farbe);
	~Player();
	Farbe getColor();
	void setColor(Farbe);
protected:
	Farbe color;
	//Stats to be added
};
