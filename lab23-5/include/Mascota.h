#ifndef MASCOTA_H
#define MASCOTA_H
#include <iostream>
using namespace std;

class Mascota{
    protected:
    string nombre;
    int patas;
    public:

        Mascota(string,int);
        virtual string hablar()=0;

};

#endif // MASCOTA_H
