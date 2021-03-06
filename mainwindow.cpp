#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFont>
#include "controler.h"
#include <QTableWidgetItem>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new Model();
    _controler = new controler(model);
    connect(qApp, SIGNAL(aboutToQuit()), _controler, SLOT(quitMyApp()));

    ui->pushButton_1->setFixedSize(400,180);
    ui->pushButton_1->setText("Coupures");
    ui->pushButton_1->setColor(VigilButton::GREEN);
    ui->pushButton_1->setShape(VigilButton::ROUND);
    ui->pushButton_1->setid(1);
    ui->pushButton_1->setmodel(this->model);
    ui->pushButton_1->setFontSize(22);
    ui->pushButton_1->setLcdNb(ui->lcdNumber);

    ui->pushButton_2->setFixedSize(400,180);
    ui->pushButton_2->setText("Qualité");
    ui->pushButton_2->setColor(VigilButton::GREEN);
    ui->pushButton_2->setShape(VigilButton::ROUND);
    ui->pushButton_2->setid(2);
    ui->pushButton_2->setmodel(this->model);
    ui->pushButton_2->setFontSize(22);
    ui->pushButton_2->setLcdNb(ui->lcdNumber_2);


    ui->pushButton_3->setFixedSize(400,180);
    ui->pushButton_3->setText("Délai");
    ui->pushButton_3->setColor(VigilButton::GREEN);
    ui->pushButton_3->setShape(VigilButton::ROUND);
    ui->pushButton_3->setid(3);
    ui->pushButton_3->setmodel(this->model);
    ui->pushButton_3->setFontSize(22);
    ui->pushButton_3->setLcdNb(ui->lcdNumber_3);


    ui->pushButton_4->setFixedSize(400,180);
    ui->pushButton_4->setText("Coupures");
    ui->pushButton_4->setColor(VigilButton::BLUE);//210,0.63
    ui->pushButton_4->setShape(VigilButton::ROUND);
    ui->pushButton_4->setid(4);
    ui->pushButton_4->setmodel(this->model);
    ui->pushButton_4->setFontSize(22);
    ui->pushButton_4->setLcdNb(ui->lcdNumber_4);


    ui->pushButton_5->setFixedSize(400,180);
    ui->pushButton_5->setText("Echo");
    ui->pushButton_5->setColor(VigilButton::BLUE);
    ui->pushButton_5->setShape(VigilButton::ROUND);
    ui->pushButton_5->setid(5);
    ui->pushButton_5->setmodel(this->model);
    ui->pushButton_5->setFontSize(22);
    ui->pushButton_5->setLcdNb(ui->lcdNumber_5);


    ui->pushButton_6->setFixedSize(400,180);
    ui->pushButton_6->setText("Bruit");
    ui->pushButton_6->setColor(VigilButton::BLUE);
    ui->pushButton_6->setShape(VigilButton::ROUND);
    ui->pushButton_6->setid(6);
    ui->pushButton_6->setmodel(this->model);
    ui->pushButton_6->setFontSize(22);
    ui->pushButton_6->setLcdNb(ui->lcdNumber_6);


    QFont font("Myriad Pro",22);
    font.setBold(true);
    ui->label->setFont(font);
    ui->label->setStyleSheet("QLabel { color : green; }");
    ui->label->setAlignment(Qt::AlignHCenter);
    ui->label->setFixedHeight(50);


    ui->label_2->setFont(font);
    ui->label_2->setStyleSheet("QLabel { color : blue; }");
    ui->label_2->setAlignment(Qt::AlignHCenter);
    ui->label_2->setFixedHeight(50);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::quitMyApp(){
    _controler->writeResults();
}

