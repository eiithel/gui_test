#include "vigilbutton.h"

VigilButton::VigilButton(QWidget *parent) : QAbstractButton(parent), fontSize(12)
{
    setText("default");
    setFixedSize(50,50);

    setColor(GRAY);
    setShape(DEFAULT);

    bp.setCurrentColorGroup(QPalette::Inactive);

    //drop shadow effect
    setGraphicsEffect(&bodyShadow);
    bodyShadow.setColor(QColor(0, 0, 0, 200));
    bodyShadow.setBlurRadius(20.0);
    bodyShadow.setDistance(6.0);

    timesFont.setFamily("Myriad Pro");
    timesFont.setPointSize(fontSize);
    timesFont.setBold(true);

}

VigilButton::VigilButton(const QString &text,int w, int h, VigilColor FlatButtonColor, Shape shape, QWidget *parent) :
    QAbstractButton(parent), fontSize(20)
{
    setText(text);
    setFixedSize(w,h);

    setColor(FlatButtonColor);
    setShape(shape);

    bp.setCurrentColorGroup(QPalette::Inactive);

    //drop shadow effect
    setGraphicsEffect(&bodyShadow);
    bodyShadow.setColor(QColor(0, 0, 0, 200));
    bodyShadow.setBlurRadius(20.0);
    bodyShadow.setDistance(6.0);

    timesFont.setFamily("Myriad Pro");
    timesFont.setPointSize(fontSize);
    timesFont.setBold(true);
}

void VigilButton::mousePressEvent(QMouseEvent * e)
{
    QAbstractButton::mousePressEvent(e);
    bodyShadow.setDistance(3.0);
    timesFont.setPointSizeF(fontSize-1);
    _model->increment(_id,2);
}

void VigilButton::mouseReleaseEvent(QMouseEvent * e)
{
    QAbstractButton::mouseReleaseEvent(e);
    bodyShadow.setDistance(6.0);
    timesFont.setPointSizeF(fontSize);
}

void VigilButton::paintEvent(QPaintEvent* e)
{
    QPainter p(this);
    p.save();

    if(!isEnabled())    bp.setCurrentColorGroup(QPalette::Disabled);
    else if(!isDown()&&!isChecked())bp.setCurrentColorGroup(QPalette::Inactive);
    else                bp.setCurrentColorGroup(QPalette::Active);

    p.setRenderHint(QPainter::Antialiasing);
    QPainterPath path;
    path.addRoundedRect(e->rect(),xRadius, yRadius, Qt::RelativeSize);

    QRadialGradient gradient(size().width()/2,size().rheight()/2, size().width()/2);

    gradient.setColorAt(0.0, bp.midlight().color());
    gradient.setColorAt(0.8, VigilButtonPalette::interPoleRgb(bp.midlight().color(),bp.dark().color()));
    gradient.setColorAt(1.0, bp.dark().color());

    p.setBrush(gradient);

    p.fillPath(path,p.brush());

    QPainterPath textPath;
    textPath.addText(size().rwidth()/2, size().rheight()/2, timesFont, text());
    textPath.translate(-textPath.boundingRect().width()/2,textPath.boundingRect().height()/2);
    p.fillPath(textPath,bp.buttonText().color());

    p.restore();
}

void VigilButton::setShape(Shape s)
{
    switch (s) {
    case FACTORY:
        xRadius = 20;
        yRadius = 100;
        break;
    case ROUND:
        xRadius = 100;
        yRadius = 100;
        break;
    default:
        xRadius = 20;
        yRadius = 20;
        break;
    }
    update();
}

void VigilButton::setColor(VigilColor c)
{
    switch (c) {
    case BLUE:
        bp.setHSV(210,0.63);
        break;
    case RED:
        bp.setHSV(0,0.80);
        break;
    case ORANGE:
        bp.setHSV(12,0.80);
        break;
    case GREEN:
        bp.setHSV(105,0.63);
        break;
    case GRAY:
        bp.setHSV(30,0.17);
        break;
    case LIGHT_GREEN:
        bp.setHSV(105,0.63);
    default:
        bp.setHSV(110,0.17);
        break;
    }
    update();
}

void VigilButton::setFontSize(int size)
{
    fontSize = size;
    timesFont.setPointSize(size);
    update();
}

void VigilButton::setid(int id){
    _id =id;
}

void VigilButton::setmodel(Model* model){
    _model = model;
}


