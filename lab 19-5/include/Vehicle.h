#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;


class Vehicle{
    protected:
        string license;
        int year;
    public:
        Vehicle();
        Vehicle(const string, const int);
        const string getDesc();
        const string getLicense();
        const int getYear();


};

#endif // VEHICLE_H
