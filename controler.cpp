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

    QMultiMap<int,double>::const_iterator i = results.find(1);



    QFile outfile(QString("/home/ethel/qwt-5.2/test-ethel/Vigil_3G/clicks_results.txt"));

    if (!outfile.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
    {
        qDebug() << "Unable to create file";
        return;
    }

    outfile.write("bouton1:");
    QTextStream stream(&outfile);

    while (i != results.end() && i.key() == 1) {
        stream << i.value() <<",";
        ++i;
    }
    stream << "\n";

    outfile.close();
}


void controler::quitMyApp(){
    writeResults();
}
