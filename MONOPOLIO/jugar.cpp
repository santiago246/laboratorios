/*
 * jugar.cpp
 *
 *  Created on: 29 de may. de 2016
 *      Author: Santiago
 */
#include "Jugador.h"
#include "Tablero.h"
#include "Casilla.h"
#include "JugandoMonopolio.h"

int main(){
	JugandoMonopolio mono;
//	Casilla cas;
//	Tablero monopolio;
//	Jugador jugador1("Jose");
//	Jugador jugador2("Santiago");
//	monopolio.mostrar(0);
//	monopolio.datos();
//	monopolio.mostrar(6);
//	cas.mostrarCasilla();
//	jugador1.mostrarPropiedades(3);
	Jugador jose("jose",800);
	Jugador santi("santiago",800);
	mono.addPlayer(jose);
	mono.addPlayer(santi);
	mono.start();


	return 0;
}



