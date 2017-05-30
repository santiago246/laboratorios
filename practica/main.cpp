#include <iostream>
using namespace std;
#include "Cumple.h"
#include "Persona.h"
#include "Gerente.h"
#include "Conserje.h"

int main()
{
    Cumple cumple(7,3,1997);

    Gerente a(cumple,"Jose","Gerente");
    Conserje b(cumple,"kebin","Conserje");
    Conserje c(cumple,"Anaaaa","Conserje");
    Persona *trabajadores[50];
    trabajadores[0]=&a;
    trabajadores[1]=&b;
    trabajadores[2]=&c;
    for(int i=0;i<3;i++){
        trabajadores[i]->mostrar();
    }

    return 0;
}
