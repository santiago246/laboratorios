#include <iostream>
using namespace std;
#include "Mascota.h"
#include "Perro.h"
#include "Gato.h"

int main()
{
    Perro dog("coco");
    Gato cat("minino");
    Mascota *mascotas[3];
    mascotas[0]=&dog;
    mascotas[1]=&cat;
    cout<<mascotas[0]->hablar()<<endl;
    cout<<mascotas[1]->hablar()<<endl;

}
