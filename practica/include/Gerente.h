#ifndef GERENTE_H
#define GERENTE_H
#include "Cumple.h"
#include <Persona.h>
#include <iostream>
using namespace std;


class Gerente : public Persona
{
    string cargo;
    public:
        Gerente();
        Gerente(Cumple,string,string);
        void mostrar();

};

#endif // GERENTE_H
