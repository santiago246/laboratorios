#include "Vehicle.h"
#include <sstream>
Vehicle::Vehicle(){
    license=string("");
    year=0;
}



Vehicle::Vehicle(const string myLicense, const int myYear)
{
    license=myLicense;
    year=myYear;
}

const string Vehicle::getDesc()
{
    stringstream ss;
    ss<<year;
    return license + " from " + ss.str();
}
const string Vehicle::getLicense()
{
    return license;
}
const int Vehicle::getYear()
{
    return year;
}






