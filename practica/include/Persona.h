#ifndef PERSONA_H
#define PERSONA_H
#include "Cumple.h"
#include <iostream>
using namespace std;

class Persona
{
    string nombre;
    Cumple nacimiento;
    int edad;
    public:
        Persona();
        Persona (Cumple,string);
        virtual void  mostrar();
        int get_edad();
        string get_nombre();

};

#endif // PERSONA_H
