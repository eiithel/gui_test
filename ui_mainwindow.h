/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "vigilbutton.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    VigilButton *pushButton_3;
    QLabel *label;
    QLCDNumber *lcdNumber;
    VigilButton *pushButton_1;
    VigilButton *pushButton_2;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    VigilButton *pushButton_5;
    VigilButton *pushButton_6;
    VigilButton *pushButton_4;
    QLCDNumber *lcdNumber_4;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_6;
    QLabel *label_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_3 = new VigilButton(centralWidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(pushButton_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 4, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setKerning(true);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(1);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        label->setWordWrap(false);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        QFont font1;
        font1.setKerning(false);
        lcdNumber->setFont(font1);
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumber, 2, 1, 1, 1);

        pushButton_1 = new VigilButton(centralWidget);
        buttonGroup->addButton(pushButton_1);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_1, 2, 0, 1, 1);

        pushButton_2 = new VigilButton(centralWidget);
        buttonGroup->addButton(pushButton_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 0, 1, 1);

        lcdNumber_2 = new QLCDNumber(centralWidget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setFrameShape(QFrame::NoFrame);
        lcdNumber_2->setSmallDecimalPoint(true);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumber_2, 3, 1, 1, 1);

        lcdNumber_3 = new QLCDNumber(centralWidget);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setFrameShape(QFrame::NoFrame);
        lcdNumber_3->setSmallDecimalPoint(true);
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumber_3, 4, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(260, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_5 = new VigilButton(centralWidget);
        buttonGroup_2 = new QButtonGroup(MainWindow);
        buttonGroup_2->setObjectName(QStringLiteral("buttonGroup_2"));
        buttonGroup_2->addButton(pushButton_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_2->addWidget(pushButton_5, 5, 0, 1, 1);

        pushButton_6 = new VigilButton(centralWidget);
        buttonGroup_2->addButton(pushButton_6);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QFont font2;
        font2.setBold(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        pushButton_6->setFont(font2);
        pushButton_6->setAutoFillBackground(false);

        gridLayout_2->addWidget(pushButton_6, 6, 0, 1, 1);

        pushButton_4 = new VigilButton(centralWidget);
        buttonGroup_2->addButton(pushButton_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 4, 0, 1, 1);

        lcdNumber_4 = new QLCDNumber(centralWidget);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));
        lcdNumber_4->setFrameShape(QFrame::NoFrame);
        lcdNumber_4->setSmallDecimalPoint(true);
        lcdNumber_4->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(lcdNumber_4, 4, 1, 1, 1);

        lcdNumber_5 = new QLCDNumber(centralWidget);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));
        lcdNumber_5->setFrameShape(QFrame::NoFrame);
        lcdNumber_5->setSmallDecimalPoint(true);
        lcdNumber_5->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(lcdNumber_5, 5, 1, 1, 1);

        lcdNumber_6 = new QLCDNumber(centralWidget);
        lcdNumber_6->setObjectName(QStringLiteral("lcdNumber_6"));
        lcdNumber_6->setFrameShape(QFrame::NoFrame);
        lcdNumber_6->setSmallDecimalPoint(true);
        lcdNumber_6->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(lcdNumber_6, 6, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(true);
        label_2->setAlignment(Qt::AlignJustify|Qt::AlignTop);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "D\303\251lai Voix", 0));
        label->setText(QApplication::translate("MainWindow", "    VIDEO", 0));
        pushButton_1->setText(QApplication::translate("MainWindow", "Coupures", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Qualit\303\251 Image", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Echo", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "Bruit ou Distorsion", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Coupures", 0));
        label_2->setText(QApplication::translate("MainWindow", "AUDIO", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
