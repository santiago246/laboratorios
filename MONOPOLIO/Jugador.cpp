/*
 * Jugador.cpp
 *
 *  Created on: 29 de may. de 2016
 *      Author: Santiago
 */

#include "Jugador.h"

Jugador::Jugador() {
	// TODO Auto-generated constructor stub
	nom="";
	dinero=800;
}

Jugador::Jugador(string nombre, int dinero) {
	this->nom=nombre;
	this->dinero=dinero;
}


string Jugador::obtener_Nombre() {
	return nom;
}

void Jugador::establecer_Nombre(string nombre) {
	this->nom=nombre;
}


void Jugador::establecer_dinero(int dinero) {
	this->dinero=dinero;
}

int Jugador::obtener_dinero(){
	return dinero;
}

void Jugador::establecer_Propiedad(Casilla prop, int num) {
	propiedad.establecerPropietario(num);
}

int Jugador::obtener_propiedad(int pos){
	//return propiedad[pos].;
}
//Casilla Jugador::obtener_Propiedades() {
//	return propiedad;
//}



bool Jugador::esValido() {
	bool temp=true;
	if(dinero<0){
		temp=false;
	}
	return temp;
}

Jugador::~Jugador() {
	// TODO Auto-generated destructor stub
}

