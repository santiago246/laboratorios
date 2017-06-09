/*
 * Tablero.cpp
 *
 *  Created on: 29 de may. de 2016
 *      Author: BlizzMac
 */

#include "Tablero.h"

Tablero::Tablero() {
	// TODO Auto-generated constructor stub
	pos[0].establecerNombre("PARTIDA");
	pos[0].establecerNumero(0);
	pos[0].establecerPropietario(0);
	pos[0].establecerPrecio(0);
	pos[0].establecerAlquiler(0);

	pos[1].establecerNombre("Avenida Bolognesi");
	pos[1].establecerNumero(1);
	pos[1].establecerPropietario(8);
	pos[1].establecerPrecio(100);
	pos[1].establecerAlquiler(20);

	pos[2].establecerNombre("CASUALIDAD");
	pos[2].establecerNumero(2);
	pos[2].establecerPropietario(8);
	pos[2].establecerPrecio(0);
	pos[2].establecerAlquiler(0);

	pos[3].establecerNombre("Ferrocarril de Lima");
	pos[3].establecerNumero(3);
	pos[3].establecerPropietario(8);
	pos[3].establecerPrecio(200);
	pos[3].establecerAlquiler(50);

	pos[4].establecerNombre("Avenida 28 de julio");
	pos[4].establecerNumero(4);
	pos[4].establecerPropietario(8);
	pos[4].establecerPrecio(100);
	pos[4].establecerAlquiler(20);

	pos[5].establecerNombre("Avenida Avancay");
	pos[5].establecerNumero(5);
	pos[5].establecerPropietario(8);
	pos[5].establecerPrecio(120);
	pos[5].establecerAlquiler(25);

	pos[6].establecerNombre("EN LA CARCEL");
	pos[6].establecerNumero(6);
	pos[6].establecerPropietario(8);
	pos[6].establecerPrecio(0);
	pos[6].establecerAlquiler(0);

	pos[7].establecerNombre("Avenida España");
	pos[7].establecerNumero(7);
	pos[7].establecerPropietario(8);
	pos[7].establecerPrecio(140);
	pos[7].establecerAlquiler(30);

	pos[8].establecerNombre("Compañia de Electricidad");
	pos[8].establecerNumero(8);
	pos[8].establecerPropietario(8);
	pos[8].establecerPrecio(150);
	pos[8].establecerAlquiler(35);

	pos[9].establecerNombre("Ferrocarril del Sur");
	pos[9].establecerNumero(9);
	pos[9].establecerPropietario(8);
	pos[9].establecerPrecio(200);
	pos[9].establecerAlquiler(50);

	pos[10].establecerNombre("ARCA COMUNAL");
	pos[10].establecerNumero(10);
	pos[10].establecerPropietario(8);
	pos[10].establecerPrecio(0);
	pos[10].establecerAlquiler(0);

	pos[11].establecerNombre("Avenida Arenales");
	pos[11].establecerNumero(11);
	pos[11].establecerPropietario(8);
	pos[11].establecerPrecio(140);
	pos[11].establecerAlquiler(30);

	pos[12].establecerNombre("PARADA LIBRE");
	pos[12].establecerNumero(12);
	pos[12].establecerPropietario(8);
	pos[12].establecerPrecio(0);
	pos[12].establecerAlquiler(0);

	pos[13].establecerNombre("CASUALIDAD");
	pos[13].establecerNumero(13);
	pos[13].establecerPropietario(8);
	pos[13].establecerPrecio(0);
	pos[13].establecerAlquiler(0);

	pos[14].establecerNombre("Avenida Tacna");
	pos[14].establecerNumero(14);
	pos[14].establecerPropietario(8);
	pos[14].establecerPrecio(220);
	pos[14].establecerAlquiler(65);

	pos[15].establecerNombre("Ferrocarril de Centro");
	pos[15].establecerNumero(15);
	pos[15].establecerPropietario(8);
	pos[15].establecerPrecio(200);
	pos[15].establecerAlquiler(50);

	pos[16].establecerNombre("Compañia de Agua");
	pos[16].establecerNumero(16);
	pos[16].establecerPropietario(8);
	pos[16].establecerPrecio(150);
	pos[16].establecerAlquiler(35);

	pos[17].establecerNombre("Avenia Brasil");
	pos[17].establecerNumero(17);
	pos[17].establecerPropietario(8);
	pos[17].establecerPrecio(240);
	pos[17].establecerAlquiler(70);

	pos[18].establecerNombre("¡VAYASE A LA CARCCEL!");
	pos[18].establecerNumero(18);
	pos[18].establecerPropietario(8);
	pos[18].establecerPrecio(0);
	pos[18].establecerAlquiler(0);

	pos[19].establecerNombre("Avenida Alfonso Ugarte");
	pos[19].establecerNumero(19);
	pos[19].establecerPropietario(8);
	pos[19].establecerPrecio(300);
	pos[19].establecerAlquiler(75);

	pos[20].establecerNombre("ARCA COMUNAL");
	pos[20].establecerNumero(20);
	pos[20].establecerPropietario(8);
	pos[20].establecerPrecio(0);
	pos[20].establecerAlquiler(0);

	pos[21].establecerNombre("Ferrocarril  del Norte");
	pos[21].establecerNumero(21);
	pos[21].establecerPropietario(8);
	pos[21].establecerPrecio(200);
	pos[21].establecerAlquiler(50);

	pos[22].establecerNombre("!IMPUESTO SOBRE POSESIONES DE LUJO");
	pos[22].establecerNumero(22);
	pos[22].establecerPropietario(8);
	pos[22].establecerPrecio(0);
	pos[22].establecerAlquiler(75);

	pos[23].establecerNombre("Avenida Wilson");
	pos[23].establecerNumero(23);
	pos[23].establecerPropietario(8);
	pos[23].establecerPrecio(320);
	pos[23].establecerAlquiler(80);
}

void Tablero::datos() {

}

void Tablero::establecer_Propietario(int pos,int pro){
	this->pos[pos].establecerPropietario(pro);
}

int Tablero::obtener_Propietario(int p){
	return this->pos[p].obtenerPropietario();
}

int Tablero::obtener_Alquiler(int p){
	return this->pos[p].obtenerAlquiler();
}

int Tablero::obtener_Precio(int p){
	return this->pos[p].obtenerPrecio();
}

string Tablero::obtener_Nombre(int p){
	return this->pos[p].obtenerNombre();
}

Casilla* Tablero::obtenerCasilla(){
	return pos;
}

void Tablero::establecerCasilla(Casilla cas){
	//pos=cas;
}
void Tablero::mostrar(int x){
	if(x==0 || x==2 || x==6 || x==10 || x==12 || x==13 || x==18 || x==20 || x==22){
		cout<<"Casillero numero "<<pos[x].obtenerNumero()<<endl;
		cout<<pos[x].obtenerNombre()<<endl;
	}
	else{
		pos[x].mostrarCasilla();

	}

}

Tablero::~Tablero() {
	// TODO Auto-generated destructor stub
}

