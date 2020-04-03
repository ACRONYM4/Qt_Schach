#include "cQlabel.h"

cQlabel::cQlabel(QWidget *parent)
	: QLabel(QString(""), parent)
{
	//connect(this, &cQlabel::clicked, this, &cQlabel::select);
}

cQlabel::~cQlabel()
{
}

void cQlabel::deselect()
{
	set_select(false);
}

void cQlabel::set_select(bool sel)//todo: ignore empty labels + deselect them or keyboard input
{
	QPalette pal = palette();
	QColor col = pal.color(QPalette::Window);

	if (sel && !selected) // select
	{
		if (isWhite())
			col = QColor(200,200,50);
		else
			col = QColor(175,175,75);
		selected = true;
	}
	else // deselect
	{
		if (isWhite())
			col = QColor(int(bgCol::white), int(bgCol::white), int(bgCol::white));
		else
			col = QColor(int(bgCol::black), int(bgCol::black), int(bgCol::black));
		selected = false;
	}
	pal.setColor(QPalette::Window, col);
	setPalette(pal);
}

void cQlabel::select()
{
	set_select(true);
}

void cQlabel::mousePressEvent(QMouseEvent* event)
{
	if(event->button() == Qt::LeftButton)
		emit clicked();
}

bool cQlabel::isWhite()
{
	QString str = this->objectName();
	int spalte = QString(str.at(4)).toInt();
	int zeile = int(str.at(2).unicode()) - 96;//a = 97
	return (spalte + zeile) % 2;
}
