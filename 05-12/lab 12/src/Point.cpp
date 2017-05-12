#include "Point.h"
Point::Point(){
    this->x=0;
    this->y=0;
}
Point::Point(float x,float y){
    this->x=x;
    this->y=y;
}

float Point::getX(){
    return x;
}
float Point::getY(){
    return y;
}

void Point::setX(float x){
    this->x=x;
}
void Point::setY(float y){
    this->y=y;
}

void Point::imprimir(){
    cout<<"("<<getX()<<","<<getY()<<")";
}
