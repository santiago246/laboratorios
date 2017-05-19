#include "Bicileta.h"
#include <sstream>


Bicicleta::Bicicleta(const string &myLicense, const int myYear, const string &myRuedas):Vehicle(myLicense,myYear)
{
    ruedas=myRuedas;
}
const string Bicicleta::getRuedas(){
    return ruedas;
}

const string Bicicleta::getDesc(){

    stringstream ss;
    ss<<year;
    return ss.str()+' '+"ruedas:" + ruedas +": "+license;
}
