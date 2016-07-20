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
#include "vigilbuttonpalette.h"
#include "customshadoweffect.h"


class VigilButton : public QAbstractButton
{
Q_OBJECT

public:
    enum VigilColor {BLUE,RED,ORANGE,GREEN,GRAY,LIGHT_GREEN};
    Q_ENUM(VigilColor)
    enum Shape {FACTORY,ROUND, DEFAULT};
    Q_ENUM(Shape)
    VigilButton(QWidget *parent = 0);
    VigilButton(const QString &text,int w, int h, VigilColor VigilColor = GRAY, Shape shape = DEFAULT, QWidget *parent = 0);

    void setShape(Shape s);
    void setColor(VigilColor c);
    void setFontSize(int size);

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
};

#endif // VIGILBUTTON_H
