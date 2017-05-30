#include "Gerente.h"

Gerente::Gerente(){
    cargo="";
}
Gerente::Gerente(Cumple a,string nombre,string cargo):Persona(a,nombre){
    this->cargo=cargo;
}
void Gerente::mostrar(){
    cout<<"Cargo: "<<cargo<<endl;
    cout<<"Sueldo: "<<2500<<" lucas"<<endl;
    cout<<"Nombre: "<<get_nombre()<<endl;
    cout<<"Edad: "<<get_edad()<<endl;
}
