#ifndef VIGILBUTTONPALETTE_H
#define VIGILBUTTONPALETTE_H


#include <QColor>
#include <QPalette>


class VigilButtonPalette : public QPalette
{
public:
    VigilButtonPalette(qreal h = 0, qreal s = 0);
    void setHSV(qreal h, qreal s);
    static QColor interPoleRgb(QColor c1, QColor c2);
private:
    QColor fromHSV(qreal Hue, qreal Saturation, qreal Value);
};

#endif // VIGILBUTTONPALETTE_H
