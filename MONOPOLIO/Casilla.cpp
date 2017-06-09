/*
 * Casilla.cpp
 *
 *  Created on: 29 de may. de 2016
 *      Author: Santiago
 */

#include "Casilla.h"

Casilla::Casilla() {
	// TODO Auto-generated constructor stub
	nombre=" ";
	precio=0;
	alquiler=0;
	numero=0;
	propietario=8;
}

string Casilla::obtenerNombre() {
	return nombre;
}

int Casilla::obtenerPrecio() {
	return precio;
}

int Casilla::obtenerAlquiler() {
	return alquiler;
}

int Casilla::obtenerNumero() {
	return numero;
}

int Casilla::obtenerPropietario() {
	return propietario;
}

void Casilla::establecerNombre(string nombre) {
	this->nombre=nombre;
}

void Casilla::establecerPrecio(int precio) {
	this->precio=precio;
}

void Casilla::establecerAlquiler(int alquiler) {
	this->alquiler=alquiler;
}

void Casilla::establecerNumero(int numero) {
	this->numero=numero;
}

void Casilla::establecerPropietario(int propietario) {
	this->propietario=propietario;
}

void Casilla::mostrarCasilla(){
	cout<<"Casillero numero "<<numero<<endl;
	cout<<nombre<<endl;
	if(propietario==8){
	cout<<"Propietario: "<<"Nadie"<<endl;
	cout<<"Precio: S/"<<precio<<endl;
	}
	cout<<"Alquiler: "<<alquiler<<endl;

}


Casilla::~Casilla() {
	// TODO Auto-generated destructor stub
}

