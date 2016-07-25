#ifndef VIGILBUTTON_H
#define VIGILBUTTON_H

#include <QObject>
#include <iostream>
#include <QAbstractButton>
#include <QColor>
#include <QPalette>
#include <QPainter>
#include <QGradient>
#include <QPainterPath>
#include <QPaintEvent>
#include <QLCDNumber>
#include "vigilbuttonpalette.h"
#include "customshadoweffect.h"
#include "model.h"
#include <chrono>


class VigilButton : public QAbstractButton
{
Q_OBJECT

public:
    enum VigilColor {BLUE,RED,ORANGE,GREEN,GRAY,LIGHT_GREEN,LIGHT_BLUE};
    Q_ENUM(VigilColor)
    enum Shape {FACTORY,ROUND, DEFAULT};
    Q_ENUM(Shape)
    VigilButton(QWidget *parent = 0);
    VigilButton(const QString &text,int w, int h, VigilColor VigilColor = GRAY, Shape shape = DEFAULT, QWidget *parent = 0);

    void setShape(Shape s);
    void setColor(VigilColor c);
    void setFontSize(int size);
    void setid(int id);
    void setmodel(Model* model);
    void setLcdNb(QLCDNumber* nb);

protected:
    void paintEvent(QPaintEvent* e);
    void mousePressEvent(QMouseEvent * e);
    void mouseReleaseEvent(QMouseEvent * e);

private:
    VigilButtonPalette bp;
    CustomShadowEffect bodyShadow;
    QFont timesFont;
    int fontSize;
    int xRadius, yRadius;
    int _id;
    Model *_model;
    QLCDNumber *_lcdnb;
    int _counter;
};

#endif // VIGILBUTTON_H
