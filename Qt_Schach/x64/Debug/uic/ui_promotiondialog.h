/********************************************************************************
** Form generated from reading UI file 'promotiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMOTIONDIALOG_H
#define UI_PROMOTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cqlabel.h"

QT_BEGIN_NAMESPACE

class Ui_PromotionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    cQlabel *label_1;
    cQlabel *label_2;
    cQlabel *label_3;
    cQlabel *label_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *PromotionDialog)
    {
        if (PromotionDialog->objectName().isEmpty())
            PromotionDialog->setObjectName(QString::fromUtf8("PromotionDialog"));
        PromotionDialog->resize(238, 99);
        verticalLayout = new QVBoxLayout(PromotionDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_1 = new cQlabel(PromotionDialog);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setMinimumSize(QSize(50, 50));
        label_1->setMaximumSize(QSize(50, 50));
        QFont font;
        font.setPointSize(30);
        label_1->setFont(font);
        label_1->setAutoFillBackground(true);
        label_1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_1);

        label_2 = new cQlabel(PromotionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(50, 50));
        label_2->setMaximumSize(QSize(50, 50));
        label_2->setFont(font);
        label_2->setAutoFillBackground(true);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        label_3 = new cQlabel(PromotionDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(50, 50));
        label_3->setMaximumSize(QSize(50, 50));
        label_3->setFont(font);
        label_3->setAutoFillBackground(true);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        label_4 = new cQlabel(PromotionDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(50, 50));
        label_4->setMaximumSize(QSize(50, 50));
        label_4->setFont(font);
        label_4->setAutoFillBackground(true);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(PromotionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PromotionDialog);

        QMetaObject::connectSlotsByName(PromotionDialog);
    } // setupUi

    void retranslateUi(QWidget *PromotionDialog)
    {
        PromotionDialog->setWindowTitle(QCoreApplication::translate("PromotionDialog", "PromotionDialog", nullptr));
        label_1->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PromotionDialog: public Ui_PromotionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMOTIONDIALOG_H
