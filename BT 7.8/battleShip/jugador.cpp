
#include "jugador.h"
#include <iostream>
using namespace std;

jugador::jugador(string nom,int e, Tablero* table):Persona(nom,e) {
	// TODO Auto-generated constructor stub

    tablero= table;
}

jugador::~jugador() {
	// TODO Auto-generated destructor stub
}

string jugador::recibirAtaque(Cordenadas coord){

	return tablero->infoAtaque(coord);
}

bool jugador::sigueAtacando(){

	return tablero->getAtaque();
}
Tablero* jugador::getTableto(){
	return tablero;
}
bool jugador::esValido(){
	bool b=true;
	if(tablero->obtenerEstado()==0){
		b=false;
	}
	return b;
}

string jugador::getNombre(){
	return Persona::getNombre();
}



