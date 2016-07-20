#include <QtGui>
#include "qmainwindow.h"
#include <QPushButton>
#include <QPalette>
#include <QLayout>
#include <QApplication>
#include <QGridLayout>
#include "mainwindow.h"

int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();

}
