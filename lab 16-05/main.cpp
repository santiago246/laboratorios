#include <iostream>
using namespace std;
#include "complejo.h"

int main()
{
    complejo c1(3,4);
    complejo c2(5,2);
    //complejo c3=c1.suma(c2);
    //complejo c3=c1.multiplicar(c2);
    //complejo c3=c1.restar(c2);
    complejo c3=c1.division(c2);
    c3.mostrar();

    return 0;
}
