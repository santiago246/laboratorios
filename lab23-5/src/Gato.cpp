#include "Gato.h"

Gato::Gato(string nombre):Mascota(nombre, 4)
{

}

string Gato::hablar()
{
  return "MIAU";
}
