#include "Conserje.h"

Conserje::Conserje()
{
    cargo="";
}

Conserje::Conserje(Cumple a,string nombre,string cargo):Persona(a,nombre){
    this->cargo=cargo;
}

void Conserje::mostrar(){
    cout<<"Cargo: "<<cargo<<endl;
    cout<<"Sueldo: "<<800<<" lucas"<<endl;
    cout<<"Nombre: "<<get_nombre()<<endl;
    cout<<"Edad: "<<get_edad()<<endl;
}
