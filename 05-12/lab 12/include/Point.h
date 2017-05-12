#ifndef POINT_H
#define POINT_H
#include <iostream>

using namespace std;

class Point{
    float x,y;
    public:
        Point();
        Point(float,float);
        float getX();
        float getY();
        void setX(float);
        void setY(float);
        void imprimir();
};

#endif // POINT_H
