/*
 * JugandoMonopolio.cpp
 *
 *  Created on: 29 de may. de 2016
 *      Author: BlizzMac
 */

#include "JugandoMonopolio.h"


JugandoMonopolio::JugandoMonopolio() {
	// TODO Auto-generated constructor stub
	this->players = players;

	cont =0;
}

void JugandoMonopolio::addPlayer(Jugador player) {
	jugadores[cont++]=player;
}


void JugandoMonopolio::comprar(int pos,int pro){
	int n;
	if(pos!= 0 && pos!=2 && pos!=6 && pos!=10 && pos!=12 && pos!=13 && pos!=18 && pos!=20 && pos!=22){
		if(mono.obtener_Propietario(pos)==8 ){
			cout<<"¿Desea comprar la propiedad? "<<endl;
			cout<<"1. SI"<<endl;
			cout<<"2. NO"<<endl;
			cin>>n;
			if (n==1){

				mono.establecer_Propietario(pos,pro);
				cout<<"Usted Compro: ";
				cout<<mono.obtener_Nombre(pos)<<endl;
				jugadores[pro].establecer_dinero(jugadores[pro].obtener_dinero()-mono.obtener_Precio(pos));
				cout<<"Dinero actual: S/"<<jugadores[pro].obtener_dinero()<<endl;
			}

		}
		else{

			if(mono.obtener_Propietario(pos)==0 ){
				cout<<"Propietario "<<jugadores[0].obtener_Nombre()<<endl;
				cout<<"Pagar alquiler S/"<<mono.obtener_Alquiler(pos)<<endl;
				jugadores[1].establecer_dinero(jugadores[1].obtener_dinero()-mono.obtener_Alquiler(pos));
				cout<<"Dinero actual: S/"<<jugadores[1].obtener_dinero()<<endl;
				jugadores[0].establecer_dinero(jugadores[0].obtener_dinero()+mono.obtener_Alquiler(pos));
			}
			if(mono.obtener_Propietario(pos)==1 ) {
				cout<<"Propietario "<<jugadores[1].obtener_Nombre()<<endl;
				cout<<"Pagar alquiler S/"<<mono.obtener_Alquiler(pos)<<endl;
				jugadores[0].establecer_dinero(jugadores[0].obtener_dinero()-mono.obtener_Alquiler(pos));
				cout<<"Dinero actual: S/"<<jugadores[0].obtener_dinero()<<endl;
				jugadores[1].establecer_dinero(jugadores[1].obtener_dinero()+mono.obtener_Alquiler(pos));
			}
		}
	}
}

void JugandoMonopolio::start() {
	//Tablero mono;
	int index=0;
	Jugador turno=jugadores[index];
	srand(time(NULL));
	int dado=0,total1=0,total2=0;
	char n;
	while(turno.esValido()){
		cout<<turno.obtener_Nombre()<<" lanzar dado"<<endl;
		cout<<"Presione cualquier tecla para lanzar el dado ";
		cin>>n;
		if(n=='t'){
			break;
		}
		if(index==0) {
			dado = 1 + rand() % 6;
			total1=total1+dado;
			cout<<"dado: "<<dado<<endl;
			if(total1<24){
				mono.mostrar(total1);
			}
			else{
				total1=total1%24;
				mono.mostrar(total1);
			}
			cout<<"Dinero actual: S/"<<jugadores[0].obtener_dinero()<<endl;
			if(mono.obtener_Propietario(total1)==index){
				cout<<"Mi propiedad"<<endl;
			}
			else{
				comprar(total1,0);
			}


			//comprar(total1,0);
			turno=jugadores[1];
			index=1;
		}

		else{
			dado = 1 + rand() % 6;
			total2=total2+dado;
			cout<<"dado: "<<dado<<endl;
			if(total2<24){
				mono.mostrar(total2);

			}
			else{
				total2=total2%24;
				mono.mostrar(total2);
			}
			cout<<"Dinero actual: S/"<<jugadores[1].obtener_dinero()<<endl;
			if(mono.obtener_Propietario(total2)==index){
				cout<<"Mi propiedad"<<endl;;
			}
			else{
				comprar(total2,1);
			}

			//comprar(total2,1);
			turno=jugadores[0];
			index=0;

		}
		cout<<endl;
	}


}



JugandoMonopolio::~JugandoMonopolio() {
	// TODO Auto-generated destructor stub
}

