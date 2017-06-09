/*
 * Tablero.h
 *
 *  Created on: 29 de may. de 2016
 *      Author: BlizzMac
 */

#ifndef TABLERO_H_
#define TABLERO_H_
#include <iostream>
using namespace std;
#include "Casilla.h"

class Tablero {
	Casilla pos[24];
public:
	Tablero();
	void datos();
	void establecer_Propietario(int,int);
	int obtener_Propietario(int);
	string obtener_Nombre(int);
	int obtener_Alquiler(int);
	int obtener_Precio(int);
	Casilla* obtenerCasilla();
	void establecerCasilla(Casilla);
	void mostrar(int);
	virtual ~Tablero();
};

#endif /* TABLERO_H_ */
