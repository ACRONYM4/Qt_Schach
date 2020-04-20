/********************************************************************************
** Form generated from reading UI file 'savegameui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEGAMEUI_H
#define UI_SAVEGAMEUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_saveGameUi
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *saveGameUi)
    {
        if (saveGameUi->objectName().isEmpty())
            saveGameUi->setObjectName(QString::fromUtf8("saveGameUi"));
        saveGameUi->resize(377, 446);
        gridLayout = new QGridLayout(saveGameUi);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(saveGameUi);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        tableWidget = new QTableWidget(saveGameUi);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        textEdit = new QTextEdit(saveGameUi);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMaximumSize(QSize(16777215, 100));

        gridLayout->addWidget(textEdit, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(saveGameUi);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(saveGameUi);

        QMetaObject::connectSlotsByName(saveGameUi);
    } // setupUi

    void retranslateUi(QDialog *saveGameUi)
    {
        saveGameUi->setWindowTitle(QCoreApplication::translate("saveGameUi", "saveGameUi", nullptr));
        label->setText(QCoreApplication::translate("saveGameUi", "Comments (max 50 Characters)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class saveGameUi: public Ui_saveGameUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEGAMEUI_H
