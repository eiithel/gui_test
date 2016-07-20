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
    //    QApplication app(argc, argv);

    //    //    QMainWindow *window = new QMainWindow();

    //    QWidget fenetre;
    //    QMainWindow mainwindow;

    //    //    QPushButton *bouton1 = new QPushButton("Bonjour");
    //    //    QPushButton *bouton2 = new QPushButton("les");
    //    //    QPushButton *bouton3 = new QPushButton("Zéros");
    //    //    QPushButton *bouton4 = new QPushButton("Echo");
    //    //    QPushButton *bouton5 = new QPushButton("Bruit");
    //    //    QPushButton *bouton6 = new QPushButton("Coupure");


    //    //    ui->AU->setText("A\nU");
    //    //    ui->AU->setShape(CncButton::ROUND);
    //    //    ui->AU->setColor(CncButton::RED);
    //    //    ui->AU->setCheckable(true);
    //    mainwindow->ui->pushButton_3->setFixedSize(100,50);
    //    mainwindow->ui->pushButton_3->setFixedSize(100,50);
    //    mainwindow->ui->pushButton_3->setText("START");
    //    mainwindow->ui->pushButton_3->setColor(CncButton::GREEN);
    //    mainwindow->ui->pushButton_3->setShape(CncButton::FACTORY);




    //    //    QGridLayout *layout = new QGridLayout;
    //    //    layout->addWidget(bouton1, 0, 0);
    //    //    layout->addWidget(bouton2, 0, 1);
    //    //    layout->addWidget(bouton3, 1, 0);
    //    //    layout->addWidget(bouton4, 1, 1);
    //    //    layout->addWidget(bouton5, 0, 0,0);
    //    //    layout->addWidget(bouton6, 1, 0);


    //    fenetre.setLayout(layout);

    //    fenetre.show();
    //    return app.exec();


    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();


}
