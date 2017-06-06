#include <iostream>
using namespace std;
#include "Point.h"
#include "PointArray.h"

int main()
{
    Point a(1,2);
    Point b(3,4);
    Point c(5,6);
    Point d(7,8);
    PointArray p;
    p.push_back(a);
    cout<<p.get(0);



    return 0;
}
