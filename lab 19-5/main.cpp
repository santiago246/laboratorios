#include <iostream>
using namespace std;
#include "Car.h"
#include "Vehicle.h"
#include "Bicileta.h"
#include "Camion.h"

int main()
{
    Vehicle v("34634654",2017);
    Car c("34634654",2017,"rojo");
    cout<<c.getDesc()<<endl;
    Bicicleta b("34634654",2017,"dos");
    cout<<b.getDesc()<<endl;
    Camion ca("34634654",2017,"ultimo");
    cout<<ca.getDesc()<<endl;



    return 0;
}
