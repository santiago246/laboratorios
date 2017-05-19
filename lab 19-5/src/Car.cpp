#include "Car.h"
#include <sstream>


Car::Car(const string &myLicense, const int myYear, const string &myStyle):Vehicle(myLicense,myYear)
{
    style=myStyle;
}
const string Car::getStyle(){
    return style;
}

const string Car::getDesc(){

    stringstream ss;
    ss<<year;
    return ss.str()+' '+ " color: "+style+": "+license;
}
