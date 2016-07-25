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
 * Le fichier de logs est enregistré sur le bureau sous le nom "Tempclicks_results.txt
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

    //w.showMaximized();
    w.showFullScreen();

    w.setWindowTitle("test clinicien");

    long int time1 = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    int time3 = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    double time4 = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    qDebug() << time1;
    //    qDebug() << time2;
    qDebug() << time3;
    qDebug() << time4;

    return a.exec();

}
