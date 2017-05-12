#include "Vector.h"
Vector::Vector(Point inicio,Point fin){
    this->inicio=inicio;
    this->fin=fin;
}

void Vector::imprimir(){
    inicio.imprimir();
    cout<<"->";
    fin.imprimir();
}
float Vector::modulo(){
    return pow(pow((fin.getX()-inicio.getX()),2)+pow((fin.getY()-inicio.getY()),2),0.5);
}
