#include <iostream>

using namespace std;
#include "Vector.h"


int main()
{
    Point inicio(7,5);
    Point fin(8,4);
    Vector p(inicio,fin);
    p.imprimir();
    cout<<endl;

    cout<<p.modulo();
    return 0;
}
