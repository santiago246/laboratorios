#ifndef GATO_H
#define GATO_H

#include <Mascota.h>
#include <iostream>
using namespace std;

class Gato : public Mascota
{
    public:
        Gato(string nombre);
        string hablar();

};

#endif // GATO_H
