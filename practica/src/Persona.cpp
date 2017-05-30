#include "Persona.h"
#include <iostream>
using namespace std;
Persona ::Persona ()
{
    nombre="";
    edad=0;
}
Persona ::Persona (Cumple nacimiento,string nombre="")
{
    this->nombre=nombre;
    this->nacimiento=nacimiento;
    this->edad=2017-nacimiento.ano;
}

int Persona::get_edad(){
    return edad;
}
string Persona::get_nombre(){
    return nombre;
}
void Persona::mostrar(){
    cout<<"Nombre: "<<this->nombre<<endl;

    cout<<"Edad: "<<this->edad<<endl;
}


