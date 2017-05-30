#ifndef CONSERJE_H
#define CONSERJE_H
#include <iostream>
using namespace std;
#include "Cumple.h"
#include <Persona.h>


class Conserje : public Persona
{
    string cargo;
    public:
        Conserje();
        Conserje(Cumple,string,string);
        void  mostrar();


};

#endif // CONSERJE_H
