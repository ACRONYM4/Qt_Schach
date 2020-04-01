#include "qt_schach.h"

Qt_Schach::Qt_Schach(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//actions();
	this->statusBar()->setSizeGripEnabled(false);//disable resize
	setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);//disable resize #2
	auto labels = this->findChildren<QLabel*>(QRegExp("l_a_.")); //Test zum finden von Labeln mit RegEx

	ui.l_a_3->setText(QString::number(labels.size()));
}
