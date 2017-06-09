/*
 * Jugador.h
 *
 *  Created on: 29 de may. de 2016
 *      Author: Santiago
 */

#ifndef JUGADOR_H_
#define JUGADOR_H_
#include <iostream>
using namespace std;
#include "Tablero.h"

class Jugador{
	string nom;
	int dinero;
	Casilla propiedad;
public:
	Jugador();
	Jugador(string,int);
	bool esValido();
	void establecer_Nombre(string);
	void establecer_dinero(int);
	int obtener_dinero();
	int obtener_propiedad(int);

	void establecer_Propiedad(Casilla,int);
	string obtener_Nombre();

//	Casilla obtener_Propiedades();

	virtual ~Jugador();
};

#endif /* JUGADOR_H_ */
