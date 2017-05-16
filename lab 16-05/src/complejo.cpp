#include "complejo.h"
#include "math.h"

complejo::complejo()
{
    real=0.0;
    imaginario=0.0;
}

complejo::complejo(double r,double i)
{
    real=r;
    imaginario=i;
}

double complejo::getReal(){
    return real;
}

double complejo::getImaginario(){
    return imaginario;
}

complejo complejo::suma(complejo c){
    double x,y;
    x=real+c.real;
    y=imaginario+c.imaginario;
    complejo resp(x,y);
    return resp;
}

complejo complejo::division(complejo c){
    double x,y;
    x=(real*c.real+imaginario*c.imaginario)/(pow(c.real,2)+pow(c.imaginario,2));
    y=(imaginario*c.real-real*c.imaginario)/(pow(c.real,2)+pow(c.imaginario,2));;
    complejo resp(x,y);
    return resp;
}

complejo complejo::resta(complejo c){
    double x,y;
    x=real-c.real;
    y=imaginario-c.imaginario;
    complejo resp(x,y);
    return resp;
}

void complejo::escalar(double n){
    real*=n;
    imaginario*=n;
}

complejo complejo::multiplicar(complejo c){
    double x,y;
    x=real*c.real-imaginario*c.imaginario;
    y=real*c.imaginario+imaginario*c.real;
    complejo resp(x,y);
    return resp;

}

void complejo::mostrar(){
    cout<<"Parte real: "<<real<<endl;
    cout<<"Parte imaginaria: "<<imaginario<<endl;
}
