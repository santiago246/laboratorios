#include "Persona .h"
#include "Cumpleanios.h"
#include <iostream>
using namespace std;
Persona ::Persona (Cumpleanios nacimiento,string nombre="",string dni="")
{
    this->dni=dni;
    this->nombre=nombre;
    this->nacimiento=nacimiento;
    this->edad=2017-nacimiento.get_anio();
}

int Persona::edad_fecha(int dia,int mes,int anio){
    this->edad=anio-nacimiento.get_anio();
    return edad;
}

int Persona::get_edad(){
    return edad;
}

void Persona::mostrar(){
    cout<<"Nombre: "<<this->nombre<<endl;
    cout<<"DNI: "<<this->dni<<endl;
    cout<<"Edad: "<<edad<<endl;
}

Persona ::~Persona ()
{
    //dtor
}
