#ifndef PERRO_H
#define PERRO_H

#include <Mascota.h>


class Perro : public Mascota
{
    public:
        Perro(string nombre);
        string hablar();
};

#endif // PERRO_H
