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
#include <QList>

#define FIRST_TEST false //indique que c'est le 1er test avec le clinicien


class controler : public QObject
{
    Q_OBJECT
public:
    controler(Model *model);

    void displayResults();
    void writeResults();



public slots:
    void quitMyApp();
    void AppendLine(int nbutton);


private:

    Model *_model;

};

#endif // CONTROLLER_H
