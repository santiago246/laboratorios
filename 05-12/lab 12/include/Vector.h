#ifndef VECTOR_H
#define VECTOR_H
#include "Point.h"
#include <iostream>
#include <math.h>

using namespace std;
class Vector{
    Point inicio,fin;
    public:
        Vector(Point,Point);
        float modulo();
        void imprimir();
};

#endif // VECTOR_H
