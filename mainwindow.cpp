#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFont>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->pushButton_1->setFixedSize(120,60);
    ui->pushButton_1->setText("Coupures");
    ui->pushButton_1->setColor(VigilButton::GREEN);
    ui->pushButton_1->setShape(VigilButton::ROUND);

    ui->pushButton_2->setFixedSize(120,60);
    ui->pushButton_2->setText("Qualité");
    ui->pushButton_2->setColor(VigilButton::LIGHT_GREEN);
    ui->pushButton_2->setShape(VigilButton::ROUND);

    ui->pushButton_3->setFixedSize(120,60);
    ui->pushButton_3->setText("Délai voix");
    ui->pushButton_3->setColor(VigilButton::GREEN);
    ui->pushButton_3->setShape(VigilButton::ROUND);

    ui->pushButton_4->setFixedSize(120,60);
    ui->pushButton_4->setText("Coupures");
    ui->pushButton_4->setColor(VigilButton::GREEN);
    ui->pushButton_4->setShape(VigilButton::ROUND);

    ui->pushButton_5->setFixedSize(120,60);
    ui->pushButton_5->setText("Echo");
    ui->pushButton_5->setColor(VigilButton::LIGHT_GREEN);
    ui->pushButton_5->setShape(VigilButton::ROUND);

    ui->pushButton_6->setFixedSize(120,60);
    ui->pushButton_6->setText("Bruit");
    ui->pushButton_6->setColor(VigilButton::GREEN);
    ui->pushButton_6->setShape(VigilButton::ROUND);

    QFont font("Myriad Pro");
    font.setBold(true);
    ui->label->setFont(font);
    ui->label_2->setFont(font);


}

MainWindow::~MainWindow()
{
    delete ui;
}


//#include "mainwindow.h"
//#include "ui_mainwindow.h"

//MainWindow::MainWindow(QWidget *parent) :
//    QMainWindow(parent),
//    ui(new Ui::MainWindow)
//{
//    ui->setupUi(this);
//}

//MainWindow::~MainWindow()
//{
//    delete ui;
//}
