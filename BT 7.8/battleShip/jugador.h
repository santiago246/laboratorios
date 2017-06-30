
#ifndef JUGADOR_H_
#define JUGADOR_H_
#include <iostream>
using namespace std;
#include "Tablero.h"
#include "Persona.h"

class jugador:public Persona {

	Tablero* tablero;
public:
	jugador(string nom,int e, Tablero* table);
	~jugador();
	string recibirAtaque(Cordenadas );
	bool sigueAtacando();
	bool esValido();
	string getNombre();
	Tablero* getTableto();

};

#endif /* JUGADOR_H_ */
