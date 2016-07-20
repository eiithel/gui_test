#ifndef CONTROLER_H
#define CONTROLER_H

#include <QMultiMap>
#include "model.h"
#include <QDebug>
#include <QString>
#include <QTextStream>
#include <QApplication>
#include <QFile>
#include <QTime>


class controler
{
    //    Q_OBJECT
public:
    controler(Model *model);

    void displayResults();
    void writeResults();



public slots:
    void quitMyApp();


private:

    Model *_model;

};

#endif // CONTROLLER_H
