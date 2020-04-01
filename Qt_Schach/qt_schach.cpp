#include "qt_schach.h"

Qt_Schach::Qt_Schach(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	actions();
	this->statusBar()->setSizeGripEnabled(false);
	setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
}
