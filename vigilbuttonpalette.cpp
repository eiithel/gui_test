#include "vigilbuttonpalette.h"
#include <iostream>


VigilButtonPalette::VigilButtonPalette(qreal h, qreal s) : QPalette()
{
    setHSV(h, s);
}

void VigilButtonPalette::setHSV(qreal h, qreal s)
{
    if(h>360){h=360; std::cout<<"VigilButtonPalette::out of range value for h (>360)"<<std::endl;}
    if(s>1){s=1; std::cout<<"VigilButtonPalette::out of range value for s (>1.0)"<<std::endl;}

    setColor(QPalette::Inactive, QPalette::Midlight, fromHSV(h,s,0.80));
    setColor(QPalette::Inactive, QPalette::Dark, fromHSV(h,s,0.45));
    setColor(QPalette::Inactive, QPalette::ButtonText, fromHSV(0,0,1));

    setColor(QPalette::Active, QPalette::Midlight, fromHSV(h,s,0.95));
    setColor(QPalette::Active, QPalette::Dark, fromHSV(h,s,0.50));
    setColor(QPalette::Active, QPalette::ButtonText, fromHSV(0,0,1));

    setColor(QPalette::Disabled, QPalette::Midlight, fromHSV(h,s,0.35));
    setColor(QPalette::Disabled, QPalette::Dark, fromHSV(h,s,0.30));
    setColor(QPalette::Disabled, QPalette::ButtonText, fromHSV(0,0,0.5));
}

QColor VigilButtonPalette::fromHSV(qreal h, qreal s, qreal v)
{
    QColor rgb;
    qreal f,l,m,n;
    int hi;

    hi = (int)(h/60);

    f = (h/60) - (qreal)hi;
    l = v*(1-s);
    m = v*(1-f*s);
    n = v*(1-(1-f)*s);

    switch (hi) {
    case 0:
        rgb.setRgbF(v,n,l);
        break;
    case 1:
        rgb.setRgbF(m,v,l);
        break;
    case 2:
        rgb.setRgbF(l,v,n);
        break;
    case 3:
        rgb.setRgbF(l,m,v);
        break;
    case 4:
        rgb.setRgbF(n,l,v);
        break;
    case 5:
        rgb.setRgbF(v,l,m);
        break;
    }
    return rgb;
}

QColor VigilButtonPalette::interPoleRgb(QColor c1, QColor c2)
{
    int r,g,b;
    r = (c1.red()<c2.red()? c1.red():c2.red()) + abs(c1.red() - c2.red())/2;
    g = (c1.green()<c2.green()? c1.green():c2.green()) + abs(c1.green() - c2.green())/2;
    b = (c1.blue()<c2.blue()? c1.blue():c2.blue())+ abs(c1.blue() - c2.blue())/2;

    return QColor(r,g,b);
}
