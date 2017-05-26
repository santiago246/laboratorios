#ifndef PERSONA _H
#define PERSONA _H
#include "Cumpleanios.h"
#include <iostream>
using namespace std;

class Persona
{
    string nombre;
    string dni;
    Cumpleanios nacimiento;
    int edad;

    public:
        Persona (Cumpleanios,string,string);
        virtual void  mostrar();
        int edad_fecha(int, int,int);
        int get_edad();
        virtual ~Persona ();

};

#endif // PERSONA _H
