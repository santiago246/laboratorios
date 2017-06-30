
#include "BattleShipGame.h"
#include <iostream>
using namespace std;
BattleShipGame::BattleShipGame(int players) {
	// TODO Auto-generated constructor stub
	this->players = players;
	jugadores= new jugador*[players];
	cont =0;
}

BattleShipGame::~BattleShipGame() {
	// TODO Auto-generated destructor stub
}

void BattleShipGame::anadirJugador(jugador* player){
	jugadores[cont++]=player;
}

void BattleShipGame::start(){
	cout<<"Iniciando juego"<<endl;
	int index=0;

	jugador * turno=jugadores[index];
	jugador * tableroEnemigo=jugadores[index];
	cout<<"Tablero de:"<<jugadores[0]->getNombre()<<endl;
	jugadores[0]->getTableto()->mostrar();
	turno=jugadores[0];
	cout<<"Tablero de:"<<jugadores[1]->getNombre()<<endl;
	jugadores[1]->getTableto()->mostrar();

	int xtemp,ytemp;
	cout<<"turnoo de:"<<turno->getNombre()<<endl;
	while(turno->esValido()){

		cout<<"\n Indique Ataque :"<<endl;

		while(turno->sigueAtacando() and turno->esValido()){
			cin>>xtemp>>ytemp;
			cout<<turno->recibirAtaque(Cordenadas(xtemp,ytemp));
			tableroEnemigo->getTableto()->mostrar(1);
			if (turno->sigueAtacando() and turno->esValido()) cout<<"Continua atacando"<<endl;

		}
		if(turno->esValido()==false) break;
		if(index==0) {
			turno=jugadores[1];
			index=1;
			tableroEnemigo=jugadores[1];

		}
		else{
			turno=jugadores[0];
			tableroEnemigo=jugadores[0];
			index=0;

		}

		cout<<"\nturnoo de:"<<turno->getNombre()<<endl;
	}
	cout<<"Juego terminado"<<endl;
	cout<<" Ganador: "<<jugadores[index]->getNombre()<<endl;
}

