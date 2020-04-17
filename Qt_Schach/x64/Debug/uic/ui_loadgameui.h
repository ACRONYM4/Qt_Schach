/********************************************************************************
** Form generated from reading UI file 'loadgameui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADGAMEUI_H
#define UI_LOADGAMEUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadGameUI
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *LoadGameUI)
    {
        if (LoadGameUI->objectName().isEmpty())
            LoadGameUI->setObjectName(QString::fromUtf8("LoadGameUI"));
        LoadGameUI->resize(400, 300);
        gridLayout = new QGridLayout(LoadGameUI);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(LoadGameUI);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setColumnCount(4);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);


        retranslateUi(LoadGameUI);

        QMetaObject::connectSlotsByName(LoadGameUI);
    } // setupUi

    void retranslateUi(QWidget *LoadGameUI)
    {
        LoadGameUI->setWindowTitle(QCoreApplication::translate("LoadGameUI", "LoadGameUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadGameUI: public Ui_LoadGameUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADGAMEUI_H
