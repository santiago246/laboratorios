/*
 * JugandoMonopolio.h
 *
 *  Created on: 29 de may. de 2016
 *      Author: BlizzMac
 */

#ifndef JUGANDOMONOPOLIO_H_
#define JUGANDOMONOPOLIO_H_
#include "Jugador.h"
#include "Tablero.h"
#include "Casilla.h"

#include <stdlib.h>
#include <time.h>

class JugandoMonopolio {
	Jugador jugadores[2];
	int players;
	int cont;
	Tablero mono;
public:
	JugandoMonopolio();
	void comprar(int,int);
	void addPlayer(Jugador);
	void start();
	void mostrarTodo(Tablero);
	virtual ~JugandoMonopolio();
};

#endif /* JUGANDOMONOPOLIO_H_ */
