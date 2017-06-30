
#include <iostream>
#include "BattleShipGame.h"
#include "jugador.h"
#include "Tablero.h"
using namespace std;


int main(){
	BattleShipGame ocioso(2);
	Tablero* tablePanchito = new Tablero(5,5);
	Cordenadas** coordenadas = new Cordenadas*[2];
	coordenadas[0]= new Cordenadas(3,3);
	coordenadas[1]= new Cordenadas(0,1);
	tablePanchito->setFigure(coordenadas,2);

	Tablero* tablePaulito = new Tablero(5,5);
	tablePaulito->setFigure(coordenadas,2);
	jugador* panchito= new jugador("Panchito",17,tablePanchito);
	tablePanchito->cambiarEstado();
	jugador* paulito= new jugador("Paulo",18,tablePaulito);
	tablePaulito->cambiarEstado();
	ocioso.anadirJugador(panchito);
	ocioso.anadirJugador(paulito);
	ocioso.start();

	return 0;
}

