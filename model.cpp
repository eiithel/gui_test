#include "model.h"

Model::Model()
{

}

Model::~Model(){

}



void Model::increment(int nbutton, double time){
    _counter.insert(nbutton,time);
}

int Model::toSecond(int ms){
    return ms/1000;
}
