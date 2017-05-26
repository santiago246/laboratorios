#include "Gerente.h"
#include <iostream>

using namespace std;
Gerente::Gerente(Cumpleanios a,string nombre,string edad,string cargo):Persona(a,nombre,edad){
    this->cargo=cargo;
}
void Gerente::mostrar(){
    mostrar();
}
Gerente::~Gerente()
{
    //dtor
}
