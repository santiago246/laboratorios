#include <iostream>
#include "Persona.h"
#include "Cumpleanios.h"
#include "Gerente.h"
using namespace std;

int main()
{
    Cumpleanios c(3,7,1997)
    Gerente g(c,"Jose","725846","gerente");
    g.mostrar();
    return 0;
}
