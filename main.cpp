#include <QtGui>
#include "qmainwindow.h"
#include <QPushButton>
#include <QPalette>
#include <QLayout>
#include <QApplication>
#include <QGridLayout>
#include "mainwindow.h"
#include <QTime>
#include <QWidget>

/*
 * L'application enregistre dans un fichier .txt l'historique des clicks du participant
 * durant une seance de test. Le fichier présente une trace sous la forme:
 * [Date, TYPE (AUDIO/VIDEO), code evenement].
 *
 * Code evenement
 * - 1 Coupures Video           - 4 Coupures
 * - 2 Qualite Image            - 5 Echo
 * - 3 Délai avec la Voix       - 6 Bruit
*/


int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setWindowTitle("test clinicien");

    return a.exec();

}
