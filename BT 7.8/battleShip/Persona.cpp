/*
 * Persona.cpp
 *
 *  Created on: 30 de jun. de 2017
 *      Author: BlizzMac
 */

#include "Persona.h"

Persona::Persona() {
	// TODO Auto-generated constructor stub
	nombre="";
	edad=0;
}

Persona::~Persona() {
	// TODO Auto-generated destructor stub
}

Persona::Persona(string nombre,int edad){
	this->nombre=nombre;

	this->edad=edad;
}


int Persona::getEdad(){
	return edad;
}

string Persona::getNombre(){
	return nombre;
}
