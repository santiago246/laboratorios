#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <Polygon.h>


class Triangle : public Polygon {

 public :
 Triangle ( const Point &a, const Point &b, const Point &c);
 virtual double area () const ;
};
#endif // TRIANGLE_H
