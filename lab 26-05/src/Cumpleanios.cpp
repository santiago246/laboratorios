#include "Cumpleanios.h"
#include <iostream>

using namespace std;

Cumpleanios ::Cumpleanios ()
{
    this->anio=0;
    this->dia=0;
    this->mes=0;
}

Cumpleanios ::Cumpleanios (int anio,int mes, int dia)
{
    this->anio=anio;
    this->dia=dia;
    this->mes=mes;
}

int Cumpleanios::get_anio(){
    return anio;
}

int Cumpleanios::get_mes(){
    return mes;
}

int Cumpleanios::get_dia(){
    return dia;
}


void Cumpleanios::mostrar ()
{
    cout<<"Anio: "<<anio<<endl;
    cout<<"Mes: "<<mes<<endl;
    cout<<"Dia: "<<dia<<endl;

}
