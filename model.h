#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QList>
#include <QPoint>
#include <QRect>
#include <QMultiMap>
#include <QTime>
#include <ctime>


class Model : public QObject
{
    Q_OBJECT
public:
    Model();
    ~Model();

    void increment(int nbutton, char* time);
    int toSecond(int ms);
    //getters
    QMultiMap<int, char*> getMap(){ return _counter;}
    QTime t;
    std::time_t _time;

public slots:

signals:


private:

    QMultiMap<int, char*> _counter;//6keys for the 6 buttons


};


#endif // MODEL_H

