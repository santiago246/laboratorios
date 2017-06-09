/*
 * Casilla.h
 *
 *  Created on: 29 de may. de 2016
 *      Author: Santiago
 */

#ifndef CASILLA_H_
#define CASILLA_H_
#include <iostream>
using namespace std;

class Casilla {
	string nombre;
	int precio;
	int alquiler;
	int numero;
	int propietario;
public:
	Casilla();
	string obtenerNombre();
	int obtenerPrecio();
	int obtenerAlquiler();
	int obtenerNumero();
	int obtenerPropietario();
	void establecerNombre(string);
	void establecerPrecio(int);
	void establecerAlquiler(int);
	void establecerNumero(int);
	void establecerPropietario(int);
	void mostrarCasilla();
	virtual ~Casilla();
};

#endif /* CASILLA_H_ */
