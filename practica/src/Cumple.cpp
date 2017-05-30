#include <iostream>
using namespace std;
#include "Cumple.h"

Cumple::Cumple()
{
   dia=0;
   mes=0;
   ano=0;
}

Cumple::Cumple(int dia,int mes,int ano)
{
    this->dia=dia;
    this->mes=mes;
    this->ano=ano;
}
void Cumple::mostrar(){
    cout<<"Dia :"<<dia<<endl;
    cout<<"Mes :"<<mes<<endl;
    cout<<"Ano :"<<ano<<endl;
}
