#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>
using namespace std;

class complejo
{
    double real;
    double imaginario;
public:
    complejo();
    complejo(double,double);
    double getReal();
    double getImaginario();
    complejo suma(complejo);
    void escalar(double );
    complejo multiplicar(complejo);
    complejo resta(complejo);
    complejo division(complejo);
    void mostrar();



};

#endif // COMPLEJO_H
