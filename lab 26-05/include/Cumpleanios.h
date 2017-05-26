#ifndef CUMPLEANIOS_H
#define CUMPLEANIOS_H
#include <iostream>

using namespace std;

class Cumpleanios
{
    int anio;
    int mes;
    int dia;
    public:
        Cumpleanios();
        Cumpleanios (int,int,int);
        int get_anio();
        int get_mes();
        int get_dia();
        void mostrar();
};


#endif // CUMPLEANIOS_H
