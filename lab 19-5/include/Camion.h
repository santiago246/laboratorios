#ifndef CAMION_H
#define CAMION_H

#include <Vehicle.h>


class Camion : public Vehicle
{
    string modelo;
    public:
        Camion(const string &myLicense, const int myYear, const string &myModelo);
        const string getModelo();
        const string getDesc();
};

#endif // CAMION_H
