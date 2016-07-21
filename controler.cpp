#include "controler.h"

controler::controler(Model *model): _model(model)
{

    //    QObject::connect(qApp,SIGNAL(aboutToQuit()),this,SLOT(quitMyApp()));
    QObject::connect(_model,SIGNAL(newClick(int)),this,SLOT(AppendLine(int)));


}


void controler::displayResults(){

    QMultiMap<int,char*> results;
    results =_model->getMap();

    QMultiMap<int,char*>::const_iterator i = results.find(1);
    while (i != results.end() && i.key() == 1) {
        qDebug() << i.value();
        ++i;
    }

}


void controler::writeResults(){

    QMultiMap<int,char*> results;
    results =_model->getMap();

    QMultiMap<int,char*>::const_iterator i1 = results.find(1);
    QMultiMap<int,char*>::const_iterator i2 = results.find(2);
    QMultiMap<int,char*>::const_iterator i3 = results.find(3);
    QMultiMap<int,char*>::const_iterator i4 = results.find(4);
    QMultiMap<int,char*>::const_iterator i5 = results.find(5);
    QMultiMap<int,char*>::const_iterator i6 = results.find(6);

    QFile outfile(QString("/home/ethel/qwt-5.2/test-ethel/Vigil_3G/clicks_results.txt"));

    if (!outfile.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
    {
        qDebug() << "Unable to create file";
        return;
    }

    QTextStream stream(&outfile);

#if FIRST_TEST

    stream << "Type bouton, temps(secondes)\n";

#endif

    stream << "\nVIDEO";

    stream << "\nCoupures: ";
    while (i1 != results.end() && i1.key() == 1) {
        stream << i1.value() <<",";
        ++i1;
    }
    stream << "\n";

    stream << "Qualite Image: ";

    while (i2 != results.end() && i2.key() == 2) {
        stream << i2.value() <<",";
        ++i2;
    }
    stream << "\n";

    stream << "Delai Voix: ";

    while (i3 != results.end() && i3.key() == 3) {
        stream << i3.value() <<",";
        ++i3;
    }

    stream << "\nAUDIO";

    stream << "\nCoupures:";

    while (i4 != results.end() && i4.key() == 4) {
        stream << i4.value() <<",";
        ++i4;
    }

    stream << "\nEcho: ";

    while (i5 != results.end() && i5.key() == 5) {
        stream << i5.value() <<",";
        ++i5;
    }

    stream << "\nBruit:";

    while (i6 != results.end() && i6.key() == 6) {
        stream << i6.value() <<",";
        ++i6;
    }
    stream << "\n --- Test suivant --- \n";


    outfile.close();
}


void controler::quitMyApp(){
    writeResults();
}

void controler::AppendLine(int nbutton){

    QMultiMap<int,char*> results;
    results =_model->getMap();
    QMultiMap<int,char*>::const_iterator i = results.find(nbutton);


    QFile outfile(QString("/home/ethel/qwt-5.2/test-ethel/Vigil_3G/clicks_results.txt"));

    if (!outfile.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
    {
        qDebug() << "Unable to create file";
        return;
    }

    QTextStream stream(&outfile);

    stream << "value inserted!\n";
    stream << i.value() << "\n";
}

