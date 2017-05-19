#ifndef BICILETA_H
#define BICILETA_H

#include <Vehicle.h>


class Bicicleta : public Vehicle
{
    string ruedas;
    public:
        Bicicleta(const string &myLicense, const int myYear, const string &myRuedas);
        const string getRuedas();
        const string getDesc();

};

#endif // BICILETA_H
