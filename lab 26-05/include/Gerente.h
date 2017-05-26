#ifndef GERENTE_H
#define GERENTE_H
#include "Cumpleanios.h"

#include "Persona.h"


class Gerente : public Persona
{
    string cargo;
    public:
        Gerente(Cumpleanios,string,string,string);
        void mostrar();
        virtual ~Gerente();
    protected:
    private:
};

#endif // GERENTE_H
