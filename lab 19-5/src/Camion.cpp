#include "Camion.h"
#include <sstream>


Camion::Camion(const string &myLicense, const int myYear, const string &myModelo):Vehicle(myLicense,myYear)
{
    modelo=myModelo;
}
const string Camion::getModelo(){
    return modelo;
}

const string Camion::getDesc(){

    stringstream ss;
    ss<<year;
    return ss.str()+' '+"modelo:" + modelo +": "+license;
}
