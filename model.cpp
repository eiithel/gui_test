#include "model.h"

Model::Model()
{
    _time = std::time(nullptr);

}

Model::~Model(){

}



void Model::increment(int nbutton, char* time){
    _counter.insert(nbutton,time);
}

int Model::toSecond(int ms){
    return ms/1000;
}
