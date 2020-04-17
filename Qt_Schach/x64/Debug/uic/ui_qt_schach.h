/********************************************************************************
** Form generated from reading UI file 'qt_schach.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SCHACH_H
#define UI_QT_SCHACH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "cQlabel.h"

QT_BEGIN_NAMESPACE

class Ui_Qt_SchachClass
{
public:
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionLoad;
    QAction *actionDatabaseSave;
    QAction *actionDatabaseLoad;
    QWidget *centralWidget;
    QGridLayout *gridMainWindow;
    QGridLayout *gridBoard;
    cQlabel *l_f_4;
    cQlabel *l_b_5;
    cQlabel *l_c_8;
    cQlabel *l_g_4;
    QLabel *label_86;
    cQlabel *l_b_6;
    cQlabel *l_h_2;
    QLabel *label_68;
    cQlabel *l_c_6;
    cQlabel *l_e_2;
    QLabel *label_76;
    QLabel *label_67;
    cQlabel *l_h_8;
    cQlabel *l_c_1;
    cQlabel *l_f_7;
    cQlabel *l_e_3;
    cQlabel *l_h_3;
    cQlabel *l_a_6;
    cQlabel *l_e_7;
    cQlabel *l_f_8;
    QLabel *label_80;
    QLabel *label_81;
    QLabel *label_73;
    QLabel *label_88;
    cQlabel *l_g_2;
    cQlabel *l_f_3;
    cQlabel *l_a_2;
    cQlabel *l_e_6;
    cQlabel *l_h_1;
    cQlabel *l_a_1;
    cQlabel *l_g_5;
    cQlabel *l_a_4;
    cQlabel *l_d_1;
    cQlabel *l_b_3;
    cQlabel *l_g_3;
    cQlabel *l_d_2;
    cQlabel *l_h_7;
    cQlabel *l_d_6;
    QLabel *label_83;
    QLabel *label_79;
    cQlabel *l_f_6;
    cQlabel *l_f_2;
    QLabel *label_85;
    cQlabel *l_a_8;
    QLabel *label_74;
    cQlabel *l_d_5;
    cQlabel *l_c_4;
    cQlabel *l_a_7;
    cQlabel *l_b_8;
    QLabel *label_87;
    QLabel *label_75;
    QLabel *label_72;
    cQlabel *l_d_4;
    cQlabel *l_b_4;
    QLabel *label_82;
    cQlabel *l_g_8;
    cQlabel *l_d_3;
    cQlabel *l_g_6;
    cQlabel *l_f_5;
    cQlabel *l_c_7;
    cQlabel *l_b_1;
    cQlabel *l_c_3;
    cQlabel *l_f_1;
    cQlabel *l_h_4;
    cQlabel *l_e_1;
    cQlabel *l_a_5;
    cQlabel *l_e_5;
    cQlabel *l_e_4;
    cQlabel *l_a_3;
    cQlabel *l_e_8;
    QLabel *label_70;
    cQlabel *l_g_7;
    cQlabel *l_b_7;
    QLabel *label_65;
    QLabel *label_78;
    cQlabel *l_h_6;
    cQlabel *l_d_7;
    QLabel *label_71;
    QLabel *label_66;
    QLabel *label_69;
    cQlabel *l_b_2;
    cQlabel *l_h_5;
    cQlabel *l_c_5;
    QLabel *label_84;
    cQlabel *l_d_8;
    QLabel *label_77;
    cQlabel *l_g_1;
    cQlabel *l_c_2;
    QLabel *label_89;
    QLabel *label_90;
    QLabel *label_91;
    QLabel *label_92;
    QLabel *label_93;
    QLabel *label_94;
    QLabel *label_95;
    QLabel *label_96;
    QLabel *label_color_1;
    QLabel *label_color_2;
    QLabel *label_color_3;
    QLabel *label_color_4;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Qt_SchachClass)
    {
        if (Qt_SchachClass->objectName().isEmpty())
            Qt_SchachClass->setObjectName(QString::fromUtf8("Qt_SchachClass"));
        Qt_SchachClass->resize(515, 576);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Qt_SchachClass->sizePolicy().hasHeightForWidth());
        Qt_SchachClass->setSizePolicy(sizePolicy);
        Qt_SchachClass->setMinimumSize(QSize(515, 576));
        Qt_SchachClass->setMaximumSize(QSize(515, 576));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(225, 225, 225, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Qt_SchachClass->setPalette(palette);
        actionSave = new QAction(Qt_SchachClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Qt_Schach/Resources/Chess/Chess_rlt45.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon);
        actionExit = new QAction(Qt_SchachClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionLoad = new QAction(Qt_SchachClass);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Qt_Schach/Resources/Chess/Chess_rdt45.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad->setIcon(icon1);
        actionDatabaseSave = new QAction(Qt_SchachClass);
        actionDatabaseSave->setObjectName(QString::fromUtf8("actionDatabaseSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Qt_Schach/Resources/Chess/Chess_nlt45.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDatabaseSave->setIcon(icon2);
        actionDatabaseLoad = new QAction(Qt_SchachClass);
        actionDatabaseLoad->setObjectName(QString::fromUtf8("actionDatabaseLoad"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Qt_Schach/Resources/Chess/Chess_ndt45.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDatabaseLoad->setIcon(icon3);
        centralWidget = new QWidget(Qt_SchachClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridMainWindow = new QGridLayout(centralWidget);
        gridMainWindow->setSpacing(6);
        gridMainWindow->setContentsMargins(11, 11, 11, 11);
        gridMainWindow->setObjectName(QString::fromUtf8("gridMainWindow"));
        gridBoard = new QGridLayout();
        gridBoard->setSpacing(5);
        gridBoard->setObjectName(QString::fromUtf8("gridBoard"));
        gridBoard->setSizeConstraint(QLayout::SetMinAndMaxSize);
        l_f_4 = new cQlabel(centralWidget);
        l_f_4->setObjectName(QString::fromUtf8("l_f_4"));
        l_f_4->setMinimumSize(QSize(45, 45));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush2(QColor(144, 144, 144, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_f_4->setPalette(palette1);
        QFont font;
        font.setPointSize(30);
        l_f_4->setFont(font);
        l_f_4->setAutoFillBackground(true);
        l_f_4->setText(QString::fromUtf8(""));
        l_f_4->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_f_4, 5, 6, 1, 1);

        l_b_5 = new cQlabel(centralWidget);
        l_b_5->setObjectName(QString::fromUtf8("l_b_5"));
        l_b_5->setMinimumSize(QSize(45, 45));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush3(QColor(245, 245, 245, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_b_5->setPalette(palette2);
        l_b_5->setFont(font);
        l_b_5->setAutoFillBackground(true);
        l_b_5->setText(QString::fromUtf8(""));
        l_b_5->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_b_5, 4, 2, 1, 1);

        l_c_8 = new cQlabel(centralWidget);
        l_c_8->setObjectName(QString::fromUtf8("l_c_8"));
        l_c_8->setMinimumSize(QSize(45, 45));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_c_8->setPalette(palette3);
        l_c_8->setFont(font);
        l_c_8->setAutoFillBackground(true);
        l_c_8->setText(QString::fromUtf8("\342\231\235"));
        l_c_8->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_c_8, 1, 3, 1, 1);

        l_g_4 = new cQlabel(centralWidget);
        l_g_4->setObjectName(QString::fromUtf8("l_g_4"));
        l_g_4->setMinimumSize(QSize(45, 45));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_g_4->setPalette(palette4);
        l_g_4->setFont(font);
        l_g_4->setAutoFillBackground(true);
        l_g_4->setText(QString::fromUtf8(""));
        l_g_4->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_g_4, 5, 7, 1, 1);

        label_86 = new QLabel(centralWidget);
        label_86->setObjectName(QString::fromUtf8("label_86"));
        label_86->setMinimumSize(QSize(45, 45));
        QFont font1;
        font1.setPointSize(20);
        label_86->setFont(font1);
        label_86->setAutoFillBackground(true);
        label_86->setText(QString::fromUtf8("f"));
        label_86->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_86, 0, 6, 1, 1);

        l_b_6 = new cQlabel(centralWidget);
        l_b_6->setObjectName(QString::fromUtf8("l_b_6"));
        l_b_6->setMinimumSize(QSize(45, 45));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_b_6->setPalette(palette5);
        l_b_6->setFont(font);
        l_b_6->setAutoFillBackground(true);
        l_b_6->setText(QString::fromUtf8(""));
        l_b_6->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_b_6, 3, 2, 1, 1);

        l_h_2 = new cQlabel(centralWidget);
        l_h_2->setObjectName(QString::fromUtf8("l_h_2"));
        l_h_2->setMinimumSize(QSize(45, 45));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_h_2->setPalette(palette6);
        l_h_2->setFont(font);
        l_h_2->setAutoFillBackground(true);
        l_h_2->setText(QString::fromUtf8("\342\231\231"));
        l_h_2->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_h_2, 7, 8, 1, 1);

        label_68 = new QLabel(centralWidget);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setMinimumSize(QSize(45, 45));
        label_68->setFont(font1);
        label_68->setAutoFillBackground(true);
        label_68->setText(QString::fromUtf8("8"));
        label_68->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_68, 1, 0, 1, 1);

        l_c_6 = new cQlabel(centralWidget);
        l_c_6->setObjectName(QString::fromUtf8("l_c_6"));
        l_c_6->setMinimumSize(QSize(45, 45));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_c_6->setPalette(palette7);
        l_c_6->setFont(font);
        l_c_6->setAutoFillBackground(true);
        l_c_6->setText(QString::fromUtf8(""));
        l_c_6->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_c_6, 3, 3, 1, 1);

        l_e_2 = new cQlabel(centralWidget);
        l_e_2->setObjectName(QString::fromUtf8("l_e_2"));
        l_e_2->setMinimumSize(QSize(45, 45));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_e_2->setPalette(palette8);
        l_e_2->setFont(font);
        l_e_2->setAutoFillBackground(true);
        l_e_2->setText(QString::fromUtf8("\342\231\231"));
        l_e_2->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_e_2, 7, 5, 1, 1);

        label_76 = new QLabel(centralWidget);
        label_76->setObjectName(QString::fromUtf8("label_76"));
        label_76->setMinimumSize(QSize(45, 45));
        label_76->setFont(font1);
        label_76->setAutoFillBackground(true);
        label_76->setText(QString::fromUtf8("d"));
        label_76->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_76, 9, 4, 1, 1);

        label_67 = new QLabel(centralWidget);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setMinimumSize(QSize(45, 45));
        label_67->setFont(font1);
        label_67->setAutoFillBackground(true);
        label_67->setText(QString::fromUtf8("7"));
        label_67->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_67, 2, 0, 1, 1);

        l_h_8 = new cQlabel(centralWidget);
        l_h_8->setObjectName(QString::fromUtf8("l_h_8"));
        l_h_8->setMinimumSize(QSize(45, 45));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Base, brush);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_h_8->setPalette(palette9);
        l_h_8->setFont(font);
        l_h_8->setAutoFillBackground(true);
        l_h_8->setText(QString::fromUtf8("\342\231\234"));
        l_h_8->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_h_8, 1, 8, 1, 1);

        l_c_1 = new cQlabel(centralWidget);
        l_c_1->setObjectName(QString::fromUtf8("l_c_1"));
        l_c_1->setMinimumSize(QSize(45, 45));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Base, brush);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_c_1->setPalette(palette10);
        l_c_1->setFont(font);
        l_c_1->setAutoFillBackground(true);
        l_c_1->setText(QString::fromUtf8("\342\231\227"));
        l_c_1->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_c_1, 8, 3, 1, 1);

        l_f_7 = new cQlabel(centralWidget);
        l_f_7->setObjectName(QString::fromUtf8("l_f_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(l_f_7->sizePolicy().hasHeightForWidth());
        l_f_7->setSizePolicy(sizePolicy1);
        l_f_7->setMinimumSize(QSize(45, 45));
        l_f_7->setSizeIncrement(QSize(2, 2));
        l_f_7->setBaseSize(QSize(30, 30));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Base, brush);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_f_7->setPalette(palette11);
        l_f_7->setFont(font);
        l_f_7->setAutoFillBackground(true);
        l_f_7->setText(QString::fromUtf8("\342\231\237"));
        l_f_7->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_f_7, 2, 6, 1, 1);

        l_e_3 = new cQlabel(centralWidget);
        l_e_3->setObjectName(QString::fromUtf8("l_e_3"));
        l_e_3->setMinimumSize(QSize(45, 45));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Base, brush);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_e_3->setPalette(palette12);
        l_e_3->setFont(font);
        l_e_3->setAutoFillBackground(true);
        l_e_3->setText(QString::fromUtf8(""));
        l_e_3->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_e_3, 6, 5, 1, 1);

        l_h_3 = new cQlabel(centralWidget);
        l_h_3->setObjectName(QString::fromUtf8("l_h_3"));
        l_h_3->setMinimumSize(QSize(45, 45));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::Base, brush);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_h_3->setPalette(palette13);
        l_h_3->setFont(font);
        l_h_3->setAutoFillBackground(true);
        l_h_3->setText(QString::fromUtf8(""));
        l_h_3->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_h_3, 6, 8, 1, 1);

        l_a_6 = new cQlabel(centralWidget);
        l_a_6->setObjectName(QString::fromUtf8("l_a_6"));
        l_a_6->setMinimumSize(QSize(45, 45));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::Base, brush);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_a_6->setPalette(palette14);
        l_a_6->setFont(font);
        l_a_6->setAutoFillBackground(true);
        l_a_6->setText(QString::fromUtf8(""));
        l_a_6->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_a_6, 3, 1, 1, 1);

        l_e_7 = new cQlabel(centralWidget);
        l_e_7->setObjectName(QString::fromUtf8("l_e_7"));
        sizePolicy1.setHeightForWidth(l_e_7->sizePolicy().hasHeightForWidth());
        l_e_7->setSizePolicy(sizePolicy1);
        l_e_7->setMinimumSize(QSize(45, 45));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::Base, brush);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_e_7->setPalette(palette15);
        l_e_7->setFont(font);
        l_e_7->setAutoFillBackground(true);
        l_e_7->setText(QString::fromUtf8("\342\231\237"));
        l_e_7->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_e_7, 2, 5, 1, 1);

        l_f_8 = new cQlabel(centralWidget);
        l_f_8->setObjectName(QString::fromUtf8("l_f_8"));
        l_f_8->setMinimumSize(QSize(45, 45));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::Base, brush);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_f_8->setPalette(palette16);
        l_f_8->setFont(font);
        l_f_8->setAutoFillBackground(true);
        l_f_8->setText(QString::fromUtf8("\342\231\235"));
        l_f_8->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_f_8, 1, 6, 1, 1);

        label_80 = new QLabel(centralWidget);
        label_80->setObjectName(QString::fromUtf8("label_80"));
        label_80->setMinimumSize(QSize(45, 45));
        label_80->setFont(font1);
        label_80->setAutoFillBackground(true);
        label_80->setText(QString::fromUtf8("h"));
        label_80->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_80, 9, 8, 1, 1);

        label_81 = new QLabel(centralWidget);
        label_81->setObjectName(QString::fromUtf8("label_81"));
        label_81->setMinimumSize(QSize(45, 45));
        label_81->setFont(font1);
        label_81->setAutoFillBackground(true);
        label_81->setText(QString::fromUtf8("a"));
        label_81->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_81, 0, 1, 1, 1);

        label_73 = new QLabel(centralWidget);
        label_73->setObjectName(QString::fromUtf8("label_73"));
        label_73->setMinimumSize(QSize(45, 45));
        label_73->setFont(font1);
        label_73->setAutoFillBackground(true);
        label_73->setText(QString::fromUtf8("a"));
        label_73->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_73, 9, 1, 1, 1);

        label_88 = new QLabel(centralWidget);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        label_88->setMinimumSize(QSize(45, 45));
        label_88->setFont(font1);
        label_88->setAutoFillBackground(true);
        label_88->setText(QString::fromUtf8("h"));
        label_88->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_88, 0, 8, 1, 1);

        l_g_2 = new cQlabel(centralWidget);
        l_g_2->setObjectName(QString::fromUtf8("l_g_2"));
        l_g_2->setMinimumSize(QSize(45, 45));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::Base, brush);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_g_2->setPalette(palette17);
        l_g_2->setFont(font);
        l_g_2->setAutoFillBackground(true);
        l_g_2->setText(QString::fromUtf8("\342\231\231"));
        l_g_2->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_g_2, 7, 7, 1, 1);

        l_f_3 = new cQlabel(centralWidget);
        l_f_3->setObjectName(QString::fromUtf8("l_f_3"));
        l_f_3->setMinimumSize(QSize(45, 45));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::Base, brush);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_f_3->setPalette(palette18);
        l_f_3->setFont(font);
        l_f_3->setAutoFillBackground(true);
        l_f_3->setText(QString::fromUtf8(""));
        l_f_3->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_f_3, 6, 6, 1, 1);

        l_a_2 = new cQlabel(centralWidget);
        l_a_2->setObjectName(QString::fromUtf8("l_a_2"));
        l_a_2->setMinimumSize(QSize(45, 45));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::Base, brush);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_a_2->setPalette(palette19);
        l_a_2->setFont(font);
        l_a_2->setAutoFillBackground(true);
        l_a_2->setText(QString::fromUtf8("\342\231\231"));
        l_a_2->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_a_2, 7, 1, 1, 1);

        l_e_6 = new cQlabel(centralWidget);
        l_e_6->setObjectName(QString::fromUtf8("l_e_6"));
        l_e_6->setMinimumSize(QSize(45, 45));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::Base, brush);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_e_6->setPalette(palette20);
        l_e_6->setFont(font);
        l_e_6->setAutoFillBackground(true);
        l_e_6->setText(QString::fromUtf8(""));
        l_e_6->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_e_6, 3, 5, 1, 1);

        l_h_1 = new cQlabel(centralWidget);
        l_h_1->setObjectName(QString::fromUtf8("l_h_1"));
        l_h_1->setMinimumSize(QSize(45, 45));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::Base, brush);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_h_1->setPalette(palette21);
        l_h_1->setFont(font);
        l_h_1->setAutoFillBackground(true);
        l_h_1->setText(QString::fromUtf8("\342\231\226"));
        l_h_1->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_h_1, 8, 8, 1, 1);

        l_a_1 = new cQlabel(centralWidget);
        l_a_1->setObjectName(QString::fromUtf8("l_a_1"));
        l_a_1->setMinimumSize(QSize(45, 45));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::Base, brush);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_a_1->setPalette(palette22);
        l_a_1->setFont(font);
        l_a_1->setAutoFillBackground(true);
        l_a_1->setText(QString::fromUtf8("\342\231\226"));
        l_a_1->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_a_1, 8, 1, 1, 1);

        l_g_5 = new cQlabel(centralWidget);
        l_g_5->setObjectName(QString::fromUtf8("l_g_5"));
        l_g_5->setMinimumSize(QSize(45, 45));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::Base, brush);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_g_5->setPalette(palette23);
        l_g_5->setFont(font);
        l_g_5->setAutoFillBackground(true);
        l_g_5->setText(QString::fromUtf8(""));
        l_g_5->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_g_5, 4, 7, 1, 1);

        l_a_4 = new cQlabel(centralWidget);
        l_a_4->setObjectName(QString::fromUtf8("l_a_4"));
        l_a_4->setMinimumSize(QSize(45, 45));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::Base, brush);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_a_4->setPalette(palette24);
        l_a_4->setFont(font);
        l_a_4->setAutoFillBackground(true);
        l_a_4->setText(QString::fromUtf8(""));
        l_a_4->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_a_4, 5, 1, 1, 1);

        l_d_1 = new cQlabel(centralWidget);
        l_d_1->setObjectName(QString::fromUtf8("l_d_1"));
        l_d_1->setMinimumSize(QSize(45, 45));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::Base, brush);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_d_1->setPalette(palette25);
        l_d_1->setFont(font);
        l_d_1->setAutoFillBackground(true);
        l_d_1->setText(QString::fromUtf8("\342\231\225"));
        l_d_1->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_d_1, 8, 4, 1, 1);

        l_b_3 = new cQlabel(centralWidget);
        l_b_3->setObjectName(QString::fromUtf8("l_b_3"));
        l_b_3->setMinimumSize(QSize(45, 45));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::Base, brush);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_b_3->setPalette(palette26);
        l_b_3->setFont(font);
        l_b_3->setAutoFillBackground(true);
        l_b_3->setText(QString::fromUtf8(""));
        l_b_3->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_b_3, 6, 2, 1, 1);

        l_g_3 = new cQlabel(centralWidget);
        l_g_3->setObjectName(QString::fromUtf8("l_g_3"));
        l_g_3->setMinimumSize(QSize(45, 45));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::Base, brush);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_g_3->setPalette(palette27);
        l_g_3->setFont(font);
        l_g_3->setAutoFillBackground(true);
        l_g_3->setText(QString::fromUtf8(""));
        l_g_3->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_g_3, 6, 7, 1, 1);

        l_d_2 = new cQlabel(centralWidget);
        l_d_2->setObjectName(QString::fromUtf8("l_d_2"));
        l_d_2->setMinimumSize(QSize(45, 45));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::Base, brush);
        palette28.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette28.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette28.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette28.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_d_2->setPalette(palette28);
        l_d_2->setFont(font);
        l_d_2->setAutoFillBackground(true);
        l_d_2->setText(QString::fromUtf8("\342\231\231"));
        l_d_2->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_d_2, 7, 4, 1, 1);

        l_h_7 = new cQlabel(centralWidget);
        l_h_7->setObjectName(QString::fromUtf8("l_h_7"));
        sizePolicy1.setHeightForWidth(l_h_7->sizePolicy().hasHeightForWidth());
        l_h_7->setSizePolicy(sizePolicy1);
        l_h_7->setMinimumSize(QSize(45, 45));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::Base, brush);
        palette29.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette29.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette29.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette29.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_h_7->setPalette(palette29);
        l_h_7->setFont(font);
        l_h_7->setAutoFillBackground(true);
        l_h_7->setText(QString::fromUtf8("\342\231\237"));
        l_h_7->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_h_7, 2, 8, 1, 1);

        l_d_6 = new cQlabel(centralWidget);
        l_d_6->setObjectName(QString::fromUtf8("l_d_6"));
        l_d_6->setMinimumSize(QSize(45, 45));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::Base, brush);
        palette30.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette30.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette30.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette30.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_d_6->setPalette(palette30);
        l_d_6->setFont(font);
        l_d_6->setAutoFillBackground(true);
        l_d_6->setText(QString::fromUtf8(""));
        l_d_6->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_d_6, 3, 4, 1, 1);

        label_83 = new QLabel(centralWidget);
        label_83->setObjectName(QString::fromUtf8("label_83"));
        label_83->setMinimumSize(QSize(45, 45));
        label_83->setFont(font1);
        label_83->setAutoFillBackground(true);
        label_83->setText(QString::fromUtf8("c"));
        label_83->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_83, 0, 3, 1, 1);

        label_79 = new QLabel(centralWidget);
        label_79->setObjectName(QString::fromUtf8("label_79"));
        label_79->setMinimumSize(QSize(45, 45));
        label_79->setFont(font1);
        label_79->setAutoFillBackground(true);
        label_79->setText(QString::fromUtf8("g"));
        label_79->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_79, 9, 7, 1, 1);

        l_f_6 = new cQlabel(centralWidget);
        l_f_6->setObjectName(QString::fromUtf8("l_f_6"));
        l_f_6->setMinimumSize(QSize(45, 45));
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::Base, brush);
        palette31.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette31.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette31.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette31.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_f_6->setPalette(palette31);
        l_f_6->setFont(font);
        l_f_6->setAutoFillBackground(true);
        l_f_6->setText(QString::fromUtf8(""));
        l_f_6->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_f_6, 3, 6, 1, 1);

        l_f_2 = new cQlabel(centralWidget);
        l_f_2->setObjectName(QString::fromUtf8("l_f_2"));
        l_f_2->setMinimumSize(QSize(45, 45));
        QPalette palette32;
        palette32.setBrush(QPalette::Active, QPalette::Base, brush);
        palette32.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette32.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette32.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette32.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_f_2->setPalette(palette32);
        l_f_2->setFont(font);
        l_f_2->setAutoFillBackground(true);
        l_f_2->setText(QString::fromUtf8("\342\231\231"));
        l_f_2->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_f_2, 7, 6, 1, 1);

        label_85 = new QLabel(centralWidget);
        label_85->setObjectName(QString::fromUtf8("label_85"));
        label_85->setMinimumSize(QSize(45, 45));
        label_85->setFont(font1);
        label_85->setAutoFillBackground(true);
        label_85->setText(QString::fromUtf8("e"));
        label_85->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_85, 0, 5, 1, 1);

        l_a_8 = new cQlabel(centralWidget);
        l_a_8->setObjectName(QString::fromUtf8("l_a_8"));
        l_a_8->setMinimumSize(QSize(45, 45));
        QPalette palette33;
        palette33.setBrush(QPalette::Active, QPalette::Base, brush);
        palette33.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette33.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette33.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette33.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_a_8->setPalette(palette33);
        l_a_8->setFont(font);
        l_a_8->setAutoFillBackground(true);
        l_a_8->setText(QString::fromUtf8("\342\231\234"));
        l_a_8->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_a_8, 1, 1, 1, 1);

        label_74 = new QLabel(centralWidget);
        label_74->setObjectName(QString::fromUtf8("label_74"));
        label_74->setMinimumSize(QSize(45, 45));
        label_74->setFont(font1);
        label_74->setAutoFillBackground(true);
        label_74->setText(QString::fromUtf8("b"));
        label_74->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_74, 9, 2, 1, 1);

        l_d_5 = new cQlabel(centralWidget);
        l_d_5->setObjectName(QString::fromUtf8("l_d_5"));
        l_d_5->setMinimumSize(QSize(45, 45));
        QPalette palette34;
        palette34.setBrush(QPalette::Active, QPalette::Base, brush);
        palette34.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette34.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette34.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette34.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette34.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_d_5->setPalette(palette34);
        l_d_5->setFont(font);
        l_d_5->setAutoFillBackground(true);
        l_d_5->setText(QString::fromUtf8(""));
        l_d_5->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_d_5, 4, 4, 1, 1);

        l_c_4 = new cQlabel(centralWidget);
        l_c_4->setObjectName(QString::fromUtf8("l_c_4"));
        l_c_4->setMinimumSize(QSize(45, 45));
        QPalette palette35;
        palette35.setBrush(QPalette::Active, QPalette::Base, brush);
        palette35.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette35.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette35.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette35.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette35.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_c_4->setPalette(palette35);
        l_c_4->setFont(font);
        l_c_4->setAutoFillBackground(true);
        l_c_4->setText(QString::fromUtf8(""));
        l_c_4->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_c_4, 5, 3, 1, 1);

        l_a_7 = new cQlabel(centralWidget);
        l_a_7->setObjectName(QString::fromUtf8("l_a_7"));
        sizePolicy1.setHeightForWidth(l_a_7->sizePolicy().hasHeightForWidth());
        l_a_7->setSizePolicy(sizePolicy1);
        l_a_7->setMinimumSize(QSize(45, 45));
        QPalette palette36;
        palette36.setBrush(QPalette::Active, QPalette::Base, brush);
        palette36.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette36.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette36.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette36.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette36.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_a_7->setPalette(palette36);
        l_a_7->setFont(font);
        l_a_7->setAutoFillBackground(true);
        l_a_7->setText(QString::fromUtf8("\342\231\237"));
        l_a_7->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_a_7, 2, 1, 1, 1);

        l_b_8 = new cQlabel(centralWidget);
        l_b_8->setObjectName(QString::fromUtf8("l_b_8"));
        sizePolicy1.setHeightForWidth(l_b_8->sizePolicy().hasHeightForWidth());
        l_b_8->setSizePolicy(sizePolicy1);
        l_b_8->setMinimumSize(QSize(45, 45));
        QPalette palette37;
        palette37.setBrush(QPalette::Active, QPalette::Base, brush);
        palette37.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette37.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette37.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette37.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette37.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_b_8->setPalette(palette37);
        l_b_8->setFont(font);
        l_b_8->setAutoFillBackground(true);
        l_b_8->setText(QString::fromUtf8("\342\231\236"));
        l_b_8->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_b_8, 1, 2, 1, 1);

        label_87 = new QLabel(centralWidget);
        label_87->setObjectName(QString::fromUtf8("label_87"));
        label_87->setMinimumSize(QSize(45, 45));
        label_87->setFont(font1);
        label_87->setAutoFillBackground(true);
        label_87->setText(QString::fromUtf8("g"));
        label_87->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_87, 0, 7, 1, 1);

        label_75 = new QLabel(centralWidget);
        label_75->setObjectName(QString::fromUtf8("label_75"));
        label_75->setMinimumSize(QSize(45, 45));
        label_75->setFont(font1);
        label_75->setAutoFillBackground(true);
        label_75->setText(QString::fromUtf8("c"));
        label_75->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_75, 9, 3, 1, 1);

        label_72 = new QLabel(centralWidget);
        label_72->setObjectName(QString::fromUtf8("label_72"));
        label_72->setMinimumSize(QSize(45, 45));
        label_72->setFont(font1);
        label_72->setAutoFillBackground(true);
        label_72->setText(QString::fromUtf8("1"));
        label_72->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_72, 8, 0, 1, 1);

        l_d_4 = new cQlabel(centralWidget);
        l_d_4->setObjectName(QString::fromUtf8("l_d_4"));
        l_d_4->setMinimumSize(QSize(45, 45));
        QPalette palette38;
        palette38.setBrush(QPalette::Active, QPalette::Base, brush);
        palette38.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette38.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette38.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette38.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette38.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_d_4->setPalette(palette38);
        l_d_4->setFont(font);
        l_d_4->setAutoFillBackground(true);
        l_d_4->setText(QString::fromUtf8(""));
        l_d_4->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_d_4, 5, 4, 1, 1);

        l_b_4 = new cQlabel(centralWidget);
        l_b_4->setObjectName(QString::fromUtf8("l_b_4"));
        l_b_4->setMinimumSize(QSize(45, 45));
        QPalette palette39;
        palette39.setBrush(QPalette::Active, QPalette::Base, brush);
        palette39.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette39.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette39.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette39.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette39.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_b_4->setPalette(palette39);
        l_b_4->setFont(font);
        l_b_4->setAutoFillBackground(true);
        l_b_4->setText(QString::fromUtf8(""));
        l_b_4->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_b_4, 5, 2, 1, 1);

        label_82 = new QLabel(centralWidget);
        label_82->setObjectName(QString::fromUtf8("label_82"));
        label_82->setMinimumSize(QSize(45, 45));
        label_82->setFont(font1);
        label_82->setAutoFillBackground(true);
        label_82->setText(QString::fromUtf8("b"));
        label_82->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_82, 0, 2, 1, 1);

        l_g_8 = new cQlabel(centralWidget);
        l_g_8->setObjectName(QString::fromUtf8("l_g_8"));
        l_g_8->setMinimumSize(QSize(45, 45));
        QPalette palette40;
        palette40.setBrush(QPalette::Active, QPalette::Base, brush);
        palette40.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette40.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette40.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette40.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette40.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_g_8->setPalette(palette40);
        l_g_8->setFont(font);
        l_g_8->setAutoFillBackground(true);
        l_g_8->setText(QString::fromUtf8("\342\231\236"));
        l_g_8->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_g_8, 1, 7, 1, 1);

        l_d_3 = new cQlabel(centralWidget);
        l_d_3->setObjectName(QString::fromUtf8("l_d_3"));
        l_d_3->setMinimumSize(QSize(45, 45));
        QPalette palette41;
        palette41.setBrush(QPalette::Active, QPalette::Base, brush);
        palette41.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette41.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette41.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette41.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette41.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_d_3->setPalette(palette41);
        l_d_3->setFont(font);
        l_d_3->setAutoFillBackground(true);
        l_d_3->setText(QString::fromUtf8(""));
        l_d_3->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_d_3, 6, 4, 1, 1);

        l_g_6 = new cQlabel(centralWidget);
        l_g_6->setObjectName(QString::fromUtf8("l_g_6"));
        l_g_6->setMinimumSize(QSize(45, 45));
        QPalette palette42;
        palette42.setBrush(QPalette::Active, QPalette::Base, brush);
        palette42.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette42.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette42.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette42.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette42.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_g_6->setPalette(palette42);
        l_g_6->setFont(font);
        l_g_6->setAutoFillBackground(true);
        l_g_6->setText(QString::fromUtf8(""));
        l_g_6->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_g_6, 3, 7, 1, 1);

        l_f_5 = new cQlabel(centralWidget);
        l_f_5->setObjectName(QString::fromUtf8("l_f_5"));
        l_f_5->setMinimumSize(QSize(45, 45));
        QPalette palette43;
        palette43.setBrush(QPalette::Active, QPalette::Base, brush);
        palette43.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette43.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette43.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette43.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette43.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_f_5->setPalette(palette43);
        l_f_5->setFont(font);
        l_f_5->setAutoFillBackground(true);
        l_f_5->setText(QString::fromUtf8(""));
        l_f_5->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_f_5, 4, 6, 1, 1);

        l_c_7 = new cQlabel(centralWidget);
        l_c_7->setObjectName(QString::fromUtf8("l_c_7"));
        sizePolicy1.setHeightForWidth(l_c_7->sizePolicy().hasHeightForWidth());
        l_c_7->setSizePolicy(sizePolicy1);
        l_c_7->setMinimumSize(QSize(45, 45));
        QPalette palette44;
        palette44.setBrush(QPalette::Active, QPalette::Base, brush);
        palette44.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette44.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette44.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette44.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette44.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_c_7->setPalette(palette44);
        l_c_7->setFont(font);
        l_c_7->setAutoFillBackground(true);
        l_c_7->setText(QString::fromUtf8("\342\231\237"));
        l_c_7->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_c_7, 2, 3, 1, 1);

        l_b_1 = new cQlabel(centralWidget);
        l_b_1->setObjectName(QString::fromUtf8("l_b_1"));
        l_b_1->setMinimumSize(QSize(45, 45));
        QPalette palette45;
        palette45.setBrush(QPalette::Active, QPalette::Base, brush);
        palette45.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette45.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette45.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette45.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_b_1->setPalette(palette45);
        l_b_1->setFont(font);
        l_b_1->setAutoFillBackground(true);
        l_b_1->setText(QString::fromUtf8("\342\231\230"));
        l_b_1->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_b_1, 8, 2, 1, 1);

        l_c_3 = new cQlabel(centralWidget);
        l_c_3->setObjectName(QString::fromUtf8("l_c_3"));
        l_c_3->setMinimumSize(QSize(45, 45));
        QPalette palette46;
        palette46.setBrush(QPalette::Active, QPalette::Base, brush);
        palette46.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette46.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette46.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette46.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette46.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_c_3->setPalette(palette46);
        l_c_3->setFont(font);
        l_c_3->setAutoFillBackground(true);
        l_c_3->setText(QString::fromUtf8(""));
        l_c_3->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_c_3, 6, 3, 1, 1);

        l_f_1 = new cQlabel(centralWidget);
        l_f_1->setObjectName(QString::fromUtf8("l_f_1"));
        l_f_1->setMinimumSize(QSize(45, 45));
        QPalette palette47;
        palette47.setBrush(QPalette::Active, QPalette::Base, brush);
        palette47.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette47.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette47.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette47.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette47.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_f_1->setPalette(palette47);
        l_f_1->setFont(font);
        l_f_1->setAutoFillBackground(true);
        l_f_1->setText(QString::fromUtf8("\342\231\227"));
        l_f_1->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_f_1, 8, 6, 1, 1);

        l_h_4 = new cQlabel(centralWidget);
        l_h_4->setObjectName(QString::fromUtf8("l_h_4"));
        l_h_4->setMinimumSize(QSize(45, 45));
        QPalette palette48;
        palette48.setBrush(QPalette::Active, QPalette::Base, brush);
        palette48.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette48.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette48.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette48.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_h_4->setPalette(palette48);
        l_h_4->setFont(font);
        l_h_4->setAutoFillBackground(true);
        l_h_4->setText(QString::fromUtf8(""));
        l_h_4->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_h_4, 5, 8, 1, 1);

        l_e_1 = new cQlabel(centralWidget);
        l_e_1->setObjectName(QString::fromUtf8("l_e_1"));
        l_e_1->setMinimumSize(QSize(45, 45));
        QPalette palette49;
        palette49.setBrush(QPalette::Active, QPalette::Base, brush);
        palette49.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette49.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette49.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette49.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_e_1->setPalette(palette49);
        l_e_1->setFont(font);
        l_e_1->setAutoFillBackground(true);
        l_e_1->setText(QString::fromUtf8("\342\231\224"));
        l_e_1->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_e_1, 8, 5, 1, 1);

        l_a_5 = new cQlabel(centralWidget);
        l_a_5->setObjectName(QString::fromUtf8("l_a_5"));
        l_a_5->setMinimumSize(QSize(45, 45));
        QPalette palette50;
        palette50.setBrush(QPalette::Active, QPalette::Base, brush);
        palette50.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette50.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette50.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette50.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette50.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_a_5->setPalette(palette50);
        l_a_5->setFont(font);
        l_a_5->setAutoFillBackground(true);
        l_a_5->setText(QString::fromUtf8(""));
        l_a_5->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_a_5, 4, 1, 1, 1);

        l_e_5 = new cQlabel(centralWidget);
        l_e_5->setObjectName(QString::fromUtf8("l_e_5"));
        l_e_5->setMinimumSize(QSize(45, 45));
        QPalette palette51;
        palette51.setBrush(QPalette::Active, QPalette::Base, brush);
        palette51.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette51.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette51.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette51.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette51.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_e_5->setPalette(palette51);
        l_e_5->setFont(font);
        l_e_5->setAutoFillBackground(true);
        l_e_5->setText(QString::fromUtf8(""));
        l_e_5->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_e_5, 4, 5, 1, 1);

        l_e_4 = new cQlabel(centralWidget);
        l_e_4->setObjectName(QString::fromUtf8("l_e_4"));
        l_e_4->setMinimumSize(QSize(45, 45));
        QPalette palette52;
        palette52.setBrush(QPalette::Active, QPalette::Base, brush);
        palette52.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette52.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette52.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette52.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette52.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_e_4->setPalette(palette52);
        l_e_4->setFont(font);
        l_e_4->setAutoFillBackground(true);
        l_e_4->setText(QString::fromUtf8(""));
        l_e_4->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_e_4, 5, 5, 1, 1);

        l_a_3 = new cQlabel(centralWidget);
        l_a_3->setObjectName(QString::fromUtf8("l_a_3"));
        l_a_3->setMinimumSize(QSize(45, 45));
        QPalette palette53;
        palette53.setBrush(QPalette::Active, QPalette::Base, brush);
        palette53.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette53.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette53.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette53.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette53.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_a_3->setPalette(palette53);
        l_a_3->setFont(font);
        l_a_3->setAutoFillBackground(true);
        l_a_3->setText(QString::fromUtf8(""));
        l_a_3->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_a_3, 6, 1, 1, 1);

        l_e_8 = new cQlabel(centralWidget);
        l_e_8->setObjectName(QString::fromUtf8("l_e_8"));
        l_e_8->setMinimumSize(QSize(45, 45));
        QPalette palette54;
        palette54.setBrush(QPalette::Active, QPalette::Base, brush);
        palette54.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette54.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette54.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette54.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette54.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_e_8->setPalette(palette54);
        l_e_8->setFont(font);
        l_e_8->setAutoFillBackground(true);
        l_e_8->setText(QString::fromUtf8("\342\231\232"));
        l_e_8->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_e_8, 1, 5, 1, 1);

        label_70 = new QLabel(centralWidget);
        label_70->setObjectName(QString::fromUtf8("label_70"));
        label_70->setMinimumSize(QSize(45, 45));
        label_70->setFont(font1);
        label_70->setAutoFillBackground(true);
        label_70->setText(QString::fromUtf8("3"));
        label_70->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_70, 6, 0, 1, 1);

        l_g_7 = new cQlabel(centralWidget);
        l_g_7->setObjectName(QString::fromUtf8("l_g_7"));
        sizePolicy1.setHeightForWidth(l_g_7->sizePolicy().hasHeightForWidth());
        l_g_7->setSizePolicy(sizePolicy1);
        l_g_7->setMinimumSize(QSize(45, 45));
        QPalette palette55;
        palette55.setBrush(QPalette::Active, QPalette::Base, brush);
        palette55.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette55.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette55.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette55.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette55.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_g_7->setPalette(palette55);
        l_g_7->setFont(font);
        l_g_7->setAutoFillBackground(true);
        l_g_7->setText(QString::fromUtf8("\342\231\237"));
        l_g_7->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_g_7, 2, 7, 1, 1);

        l_b_7 = new cQlabel(centralWidget);
        l_b_7->setObjectName(QString::fromUtf8("l_b_7"));
        sizePolicy1.setHeightForWidth(l_b_7->sizePolicy().hasHeightForWidth());
        l_b_7->setSizePolicy(sizePolicy1);
        l_b_7->setMinimumSize(QSize(45, 45));
        QPalette palette56;
        palette56.setBrush(QPalette::Active, QPalette::Base, brush);
        palette56.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette56.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette56.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette56.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette56.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_b_7->setPalette(palette56);
        l_b_7->setFont(font);
        l_b_7->setAutoFillBackground(true);
        l_b_7->setText(QString::fromUtf8("\342\231\237"));
        l_b_7->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_b_7, 2, 2, 1, 1);

        label_65 = new QLabel(centralWidget);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setMinimumSize(QSize(45, 45));
        label_65->setFont(font1);
        label_65->setLayoutDirection(Qt::LeftToRight);
        label_65->setAutoFillBackground(true);
        label_65->setText(QString::fromUtf8("5"));
        label_65->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_65, 4, 0, 1, 1);

        label_78 = new QLabel(centralWidget);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        label_78->setMinimumSize(QSize(45, 45));
        label_78->setFont(font1);
        label_78->setAutoFillBackground(true);
        label_78->setText(QString::fromUtf8("f"));
        label_78->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_78, 9, 6, 1, 1);

        l_h_6 = new cQlabel(centralWidget);
        l_h_6->setObjectName(QString::fromUtf8("l_h_6"));
        l_h_6->setMinimumSize(QSize(45, 45));
        QPalette palette57;
        palette57.setBrush(QPalette::Active, QPalette::Base, brush);
        palette57.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette57.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette57.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette57.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette57.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_h_6->setPalette(palette57);
        l_h_6->setFont(font);
        l_h_6->setAutoFillBackground(true);
        l_h_6->setText(QString::fromUtf8(""));
        l_h_6->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_h_6, 3, 8, 1, 1);

        l_d_7 = new cQlabel(centralWidget);
        l_d_7->setObjectName(QString::fromUtf8("l_d_7"));
        sizePolicy1.setHeightForWidth(l_d_7->sizePolicy().hasHeightForWidth());
        l_d_7->setSizePolicy(sizePolicy1);
        l_d_7->setMinimumSize(QSize(45, 45));
        QPalette palette58;
        palette58.setBrush(QPalette::Active, QPalette::Base, brush);
        palette58.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette58.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette58.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette58.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette58.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_d_7->setPalette(palette58);
        l_d_7->setFont(font);
        l_d_7->setAutoFillBackground(true);
        l_d_7->setText(QString::fromUtf8("\342\231\237"));
        l_d_7->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_d_7, 2, 4, 1, 1);

        label_71 = new QLabel(centralWidget);
        label_71->setObjectName(QString::fromUtf8("label_71"));
        label_71->setMinimumSize(QSize(45, 45));
        label_71->setFont(font1);
        label_71->setAutoFillBackground(true);
        label_71->setText(QString::fromUtf8("2"));
        label_71->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_71, 7, 0, 1, 1);

        label_66 = new QLabel(centralWidget);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setMinimumSize(QSize(45, 45));
        label_66->setFont(font1);
        label_66->setAutoFillBackground(true);
        label_66->setText(QString::fromUtf8("6"));
        label_66->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_66, 3, 0, 1, 1);

        label_69 = new QLabel(centralWidget);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setMinimumSize(QSize(45, 45));
        label_69->setFont(font1);
        label_69->setAutoFillBackground(true);
        label_69->setText(QString::fromUtf8("4"));
        label_69->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_69, 5, 0, 1, 1);

        l_b_2 = new cQlabel(centralWidget);
        l_b_2->setObjectName(QString::fromUtf8("l_b_2"));
        l_b_2->setMinimumSize(QSize(45, 45));
        QPalette palette59;
        palette59.setBrush(QPalette::Active, QPalette::Base, brush);
        palette59.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette59.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette59.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette59.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette59.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_b_2->setPalette(palette59);
        l_b_2->setFont(font);
        l_b_2->setAutoFillBackground(true);
        l_b_2->setText(QString::fromUtf8("\342\231\231"));
        l_b_2->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_b_2, 7, 2, 1, 1);

        l_h_5 = new cQlabel(centralWidget);
        l_h_5->setObjectName(QString::fromUtf8("l_h_5"));
        l_h_5->setMinimumSize(QSize(45, 45));
        QPalette palette60;
        palette60.setBrush(QPalette::Active, QPalette::Base, brush);
        palette60.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette60.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette60.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette60.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette60.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_h_5->setPalette(palette60);
        l_h_5->setFont(font);
        l_h_5->setAutoFillBackground(true);
        l_h_5->setText(QString::fromUtf8(""));
        l_h_5->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_h_5, 4, 8, 1, 1);

        l_c_5 = new cQlabel(centralWidget);
        l_c_5->setObjectName(QString::fromUtf8("l_c_5"));
        l_c_5->setMinimumSize(QSize(45, 45));
        QPalette palette61;
        palette61.setBrush(QPalette::Active, QPalette::Base, brush);
        palette61.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette61.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette61.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette61.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette61.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_c_5->setPalette(palette61);
        l_c_5->setFont(font);
        l_c_5->setAutoFillBackground(true);
        l_c_5->setText(QString::fromUtf8(""));
        l_c_5->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_c_5, 4, 3, 1, 1);

        label_84 = new QLabel(centralWidget);
        label_84->setObjectName(QString::fromUtf8("label_84"));
        label_84->setMinimumSize(QSize(45, 45));
        label_84->setFont(font1);
        label_84->setAutoFillBackground(true);
        label_84->setText(QString::fromUtf8("d"));
        label_84->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_84, 0, 4, 1, 1);

        l_d_8 = new cQlabel(centralWidget);
        l_d_8->setObjectName(QString::fromUtf8("l_d_8"));
        l_d_8->setMinimumSize(QSize(45, 45));
        QPalette palette62;
        palette62.setBrush(QPalette::Active, QPalette::Base, brush);
        palette62.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette62.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette62.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette62.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette62.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_d_8->setPalette(palette62);
        l_d_8->setFont(font);
        l_d_8->setAutoFillBackground(true);
        l_d_8->setText(QString::fromUtf8("\342\231\233"));
        l_d_8->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_d_8, 1, 4, 1, 1);

        label_77 = new QLabel(centralWidget);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        label_77->setMinimumSize(QSize(45, 45));
        label_77->setFont(font1);
        label_77->setAutoFillBackground(true);
        label_77->setText(QString::fromUtf8("e"));
        label_77->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_77, 9, 5, 1, 1);

        l_g_1 = new cQlabel(centralWidget);
        l_g_1->setObjectName(QString::fromUtf8("l_g_1"));
        l_g_1->setMinimumSize(QSize(45, 45));
        QPalette palette63;
        palette63.setBrush(QPalette::Active, QPalette::Base, brush);
        palette63.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette63.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette63.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette63.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette63.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        l_g_1->setPalette(palette63);
        l_g_1->setFont(font);
        l_g_1->setAutoFillBackground(true);
        l_g_1->setText(QString::fromUtf8("\342\231\230"));
        l_g_1->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_g_1, 8, 7, 1, 1);

        l_c_2 = new cQlabel(centralWidget);
        l_c_2->setObjectName(QString::fromUtf8("l_c_2"));
        l_c_2->setMinimumSize(QSize(45, 45));
        QPalette palette64;
        palette64.setBrush(QPalette::Active, QPalette::Base, brush);
        palette64.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette64.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette64.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette64.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette64.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        l_c_2->setPalette(palette64);
        l_c_2->setFont(font);
        l_c_2->setAutoFillBackground(true);
        l_c_2->setText(QString::fromUtf8("\342\231\231"));
        l_c_2->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(l_c_2, 7, 3, 1, 1);

        label_89 = new QLabel(centralWidget);
        label_89->setObjectName(QString::fromUtf8("label_89"));
        label_89->setMinimumSize(QSize(45, 45));
        label_89->setFont(font1);
        label_89->setAutoFillBackground(true);
        label_89->setText(QString::fromUtf8("3"));
        label_89->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_89, 6, 9, 1, 1);

        label_90 = new QLabel(centralWidget);
        label_90->setObjectName(QString::fromUtf8("label_90"));
        label_90->setMinimumSize(QSize(45, 45));
        label_90->setFont(font1);
        label_90->setAutoFillBackground(true);
        label_90->setText(QString::fromUtf8("2"));
        label_90->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_90, 7, 9, 1, 1);

        label_91 = new QLabel(centralWidget);
        label_91->setObjectName(QString::fromUtf8("label_91"));
        label_91->setMinimumSize(QSize(45, 45));
        label_91->setFont(font1);
        label_91->setAutoFillBackground(true);
        label_91->setText(QString::fromUtf8("1"));
        label_91->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_91, 8, 9, 1, 1);

        label_92 = new QLabel(centralWidget);
        label_92->setObjectName(QString::fromUtf8("label_92"));
        label_92->setMinimumSize(QSize(45, 45));
        label_92->setFont(font1);
        label_92->setAutoFillBackground(true);
        label_92->setText(QString::fromUtf8("4"));
        label_92->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_92, 5, 9, 1, 1);

        label_93 = new QLabel(centralWidget);
        label_93->setObjectName(QString::fromUtf8("label_93"));
        label_93->setMinimumSize(QSize(45, 45));
        label_93->setFont(font1);
        label_93->setAutoFillBackground(true);
        label_93->setText(QString::fromUtf8("5"));
        label_93->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_93, 4, 9, 1, 1);

        label_94 = new QLabel(centralWidget);
        label_94->setObjectName(QString::fromUtf8("label_94"));
        label_94->setMinimumSize(QSize(45, 45));
        label_94->setFont(font1);
        label_94->setAutoFillBackground(true);
        label_94->setText(QString::fromUtf8("6"));
        label_94->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_94, 3, 9, 1, 1);

        label_95 = new QLabel(centralWidget);
        label_95->setObjectName(QString::fromUtf8("label_95"));
        label_95->setMinimumSize(QSize(45, 45));
        label_95->setFont(font1);
        label_95->setAutoFillBackground(true);
        label_95->setText(QString::fromUtf8("7"));
        label_95->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_95, 2, 9, 1, 1);

        label_96 = new QLabel(centralWidget);
        label_96->setObjectName(QString::fromUtf8("label_96"));
        label_96->setMinimumSize(QSize(45, 45));
        label_96->setFont(font1);
        label_96->setAutoFillBackground(true);
        label_96->setText(QString::fromUtf8("8"));
        label_96->setAlignment(Qt::AlignCenter);

        gridBoard->addWidget(label_96, 1, 9, 1, 1);

        label_color_1 = new QLabel(centralWidget);
        label_color_1->setObjectName(QString::fromUtf8("label_color_1"));
        QPalette palette65;
        palette65.setBrush(QPalette::Active, QPalette::Base, brush);
        palette65.setBrush(QPalette::Active, QPalette::Window, brush);
        palette65.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette65.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette65.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette65.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_color_1->setPalette(palette65);
        label_color_1->setAutoFillBackground(true);

        gridBoard->addWidget(label_color_1, 9, 9, 1, 1);

        label_color_2 = new QLabel(centralWidget);
        label_color_2->setObjectName(QString::fromUtf8("label_color_2"));
        QPalette palette66;
        palette66.setBrush(QPalette::Active, QPalette::Base, brush);
        palette66.setBrush(QPalette::Active, QPalette::Window, brush);
        palette66.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette66.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette66.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette66.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_color_2->setPalette(palette66);
        label_color_2->setAutoFillBackground(true);

        gridBoard->addWidget(label_color_2, 9, 0, 1, 1);

        label_color_3 = new QLabel(centralWidget);
        label_color_3->setObjectName(QString::fromUtf8("label_color_3"));
        QPalette palette67;
        palette67.setBrush(QPalette::Active, QPalette::Base, brush);
        palette67.setBrush(QPalette::Active, QPalette::Window, brush);
        palette67.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette67.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette67.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette67.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_color_3->setPalette(palette67);
        label_color_3->setAutoFillBackground(true);

        gridBoard->addWidget(label_color_3, 0, 0, 1, 1);

        label_color_4 = new QLabel(centralWidget);
        label_color_4->setObjectName(QString::fromUtf8("label_color_4"));
        QPalette palette68;
        palette68.setBrush(QPalette::Active, QPalette::Base, brush);
        palette68.setBrush(QPalette::Active, QPalette::Window, brush);
        palette68.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette68.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette68.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette68.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_color_4->setPalette(palette68);
        label_color_4->setAutoFillBackground(true);

        gridBoard->addWidget(label_color_4, 0, 9, 1, 1);


        gridMainWindow->addLayout(gridBoard, 0, 0, 1, 1);

        Qt_SchachClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Qt_SchachClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 515, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        Qt_SchachClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Qt_SchachClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMinimumSize(QSize(0, 20));
        mainToolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        Qt_SchachClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Qt_SchachClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Qt_SchachClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionExit);
        mainToolBar->addAction(actionLoad);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionDatabaseLoad);
        mainToolBar->addAction(actionDatabaseSave);

        retranslateUi(Qt_SchachClass);

        QMetaObject::connectSlotsByName(Qt_SchachClass);
    } // setupUi

    void retranslateUi(QMainWindow *Qt_SchachClass)
    {
        Qt_SchachClass->setWindowTitle(QCoreApplication::translate("Qt_SchachClass", "Schach", nullptr));
        actionSave->setText(QCoreApplication::translate("Qt_SchachClass", "Speichern", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("Qt_SchachClass", "Speichert den aktuellen Spielstand", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("Qt_SchachClass", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("Qt_SchachClass", "Exit", nullptr));
        actionLoad->setText(QCoreApplication::translate("Qt_SchachClass", "Load", nullptr));
#if QT_CONFIG(tooltip)
        actionLoad->setToolTip(QCoreApplication::translate("Qt_SchachClass", "Laden eines Spielstandes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionLoad->setShortcut(QCoreApplication::translate("Qt_SchachClass", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDatabaseSave->setText(QCoreApplication::translate("Qt_SchachClass", "Database Save", nullptr));
#if QT_CONFIG(tooltip)
        actionDatabaseSave->setToolTip(QCoreApplication::translate("Qt_SchachClass", "Spiel auf Datenbankspeichern", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDatabaseLoad->setText(QCoreApplication::translate("Qt_SchachClass", "Database Load", nullptr));
#if QT_CONFIG(tooltip)
        actionDatabaseLoad->setToolTip(QCoreApplication::translate("Qt_SchachClass", "Spiel aus Datenbank laden", nullptr));
#endif // QT_CONFIG(tooltip)
        label_color_1->setText(QString());
        label_color_2->setText(QString());
        label_color_3->setText(QString());
        label_color_4->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("Qt_SchachClass", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Qt_SchachClass: public Ui_Qt_SchachClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SCHACH_H
