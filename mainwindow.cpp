#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFont>
#include "controler.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    model = new Model();
    _controler = new controler(model);
    //    controler c(model);
    QObject::connect(qApp,SIGNAL(aboutToQuit()),this,SLOT(quitMyApp()));



    ui->pushButton_1->setFixedSize(120,60);
    ui->pushButton_1->setText("Coupures");
    ui->pushButton_1->setColor(VigilButton::GREEN);
    ui->pushButton_1->setShape(VigilButton::ROUND);
    ui->pushButton_1->setid(1);
    ui->pushButton_1->setmodel(this->model);

    ui->pushButton_2->setFixedSize(120,60);
    ui->pushButton_2->setText("Qualité");
    ui->pushButton_2->setColor(VigilButton::LIGHT_GREEN);
    ui->pushButton_2->setShape(VigilButton::ROUND);
    ui->pushButton_2->setid(2);
    ui->pushButton_2->setmodel(this->model);

    ui->pushButton_3->setFixedSize(120,60);
    ui->pushButton_3->setText("Délai voix");
    ui->pushButton_3->setColor(VigilButton::GREEN);
    ui->pushButton_3->setShape(VigilButton::ROUND);
    ui->pushButton_3->setid(3);
    ui->pushButton_3->setmodel(this->model);

    ui->pushButton_4->setFixedSize(120,60);
    ui->pushButton_4->setText("Coupures");
    ui->pushButton_4->setColor(VigilButton::GREEN);
    ui->pushButton_4->setShape(VigilButton::ROUND);
    ui->pushButton_4->setid(4);
    ui->pushButton_4->setmodel(this->model);

    ui->pushButton_5->setFixedSize(120,60);
    ui->pushButton_5->setText("Echo");
    ui->pushButton_5->setColor(VigilButton::LIGHT_GREEN);
    ui->pushButton_5->setShape(VigilButton::ROUND);
    ui->pushButton_5->setid(5);
    ui->pushButton_5->setmodel(this->model);

    ui->pushButton_6->setFixedSize(120,60);
    ui->pushButton_6->setText("Bruit");
    ui->pushButton_6->setColor(VigilButton::GREEN);
    ui->pushButton_6->setShape(VigilButton::ROUND);
    ui->pushButton_6->setid(6);
    ui->pushButton_6->setmodel(this->model);


    QFont font("Myriad Pro");
    font.setBold(true);
    ui->label->setFont(font);
    ui->label_2->setFont(font);

    //_controler->displayResults();


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_1_clicked()
{

}

void MainWindow::increment_counter(int nb){
    double timeTest =2;
    model->increment(nb, timeTest);
}

void MainWindow::quitMyApp(){
    _controler->writeResults();
}

