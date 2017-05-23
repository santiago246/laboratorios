#include "Perro.h"

Perro::Perro(string nombre):Mascota(nombre,4)
{

}

string Perro::hablar(){
    return "GUAU";
}
