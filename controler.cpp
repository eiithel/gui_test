#include "controler.h"

controler::controler(Model *model): _model(model)
{

    //    QObject::connect(qApp,SIGNAL(aboutToQuit()),this,SLOT(quitMyApp()));

}


void controler::displayResults(){

    QMultiMap<int,double> results;
    results =_model->getMap();

    QMultiMap<int,double>::const_iterator i = results.find(1);
    while (i != results.end() && i.key() == 1) {
        qDebug() << i.value();
        ++i;
    }

}


void controler::writeResults(){

    QMultiMap<int,double> results;
    results =_model->getMap();

    QMultiMap<int,double>::const_iterator i1 = results.find(1);
    QMultiMap<int,double>::const_iterator i2 = results.find(2);
    QMultiMap<int,double>::const_iterator i3 = results.find(3);
    QMultiMap<int,double>::const_iterator i4 = results.find(4);
    QMultiMap<int,double>::const_iterator i5 = results.find(5);
    QMultiMap<int,double>::const_iterator i6 = results.find(6);

    QFile outfile(QString("/home/ethel/qwt-5.2/test-ethel/Vigil_3G/clicks_results.txt"));

    if (!outfile.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
    {
        qDebug() << "Unable to create file";
        return;
    }

    //    outfile.write("bouton1:");
    QTextStream stream(&outfile);

    stream << "bouton1:";
    while (i1 != results.end() && i1.key() == 1) {
        stream << i1.value() <<",";
        ++i1;
    }
    stream << "\n";

    //    outfile.write("bouton2:");
    stream << "bouton2:";

    while (i2 != results.end() && i2.key() == 2) {
        stream << i2.value() <<",";
        ++i2;
    }
    stream << "\n";

    stream << "bouton3:";

    while (i3 != results.end() && i3.key() == 3) {
        stream << i3.value() <<",";
        ++i3;
    }
    stream << "\n";

    stream << "bouton4:";

    while (i4 != results.end() && i4.key() == 4) {
        stream << i4.value() <<",";
        ++i4;
    }
    stream << "\n";

    stream << "bouton5:";

    while (i5 != results.end() && i5.key() == 5) {
        stream << i5.value() <<",";
        ++i5;
    }
    stream << "\n";

    stream << "bouton6:";

    while (i6 != results.end() && i6.key() == 6) {
        stream << i6.value() <<",";
        ++i6;
    }
    stream << "\n";


    outfile.close();
}


void controler::quitMyApp(){
    writeResults();
}
