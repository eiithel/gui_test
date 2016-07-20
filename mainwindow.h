#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include "vigilbutton.h"
#include "controler.h"
#include "model.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_1_clicked();
    void increment_counter(int nb);
    void quitMyApp();

private:
    Ui::MainWindow *ui;
    VigilButton *_button;

    controler* _controler;

    Model* model;


};

#endif // MAINWINDOW_H
