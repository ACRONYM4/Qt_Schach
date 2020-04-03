#pragma once

#include <QLabel>
#include <QPalette>
#include <QMouseEvent>

enum class bgCol
{
	black = 144,
	white = 245
};

class cQlabel : public QLabel
{
	Q_OBJECT

protected:
	bool selected = false;
public:
	cQlabel(QWidget *parent);
	~cQlabel();
	void deselect();
	void set_select(bool sel);
signals:
	void clicked();

public slots:
	void select();
protected:
	void mousePressEvent(QMouseEvent* event);
	bool isWhite();
};
