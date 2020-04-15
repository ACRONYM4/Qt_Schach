#include "qt_schach.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Qt_Schach w;
	w.show();

	return a.exec();
}
