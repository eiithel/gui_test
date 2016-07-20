#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QList>
#include <QPoint>
#include <QRect>
#include <QMultiMap>
#include <QTime>

class Model : public QObject
{
    Q_OBJECT
public:
    Model();
    ~Model();

    void increment(int nbutton, double time);
    int toSecond(int ms);
    //getters
    QMultiMap<int, double> getMap(){ return _counter;}
    QTime t;


public slots:

signals:


private:

    QMultiMap<int, double> _counter;//6keys for the 6 buttons


};


#endif // MODEL_H

