
#include "Tablero.h"
#include <iostream>
using namespace std;
int Cordenadas::getFila(){
	return row;
}

int Cordenadas::getColumna(){
	return col;
}


Tablero::Tablero(int w,int h) {
	// TODO Auto-generated constructor stub
	ancho=w;
	alto=h;
	numFiguras=0;
	if (data==NULL){
		data= new int*[w];
		for(int i=0;i<ancho;i++){
			data[i]= new int[alto];
			for(int j=0;j<alto;j++){
				data[i][j]=0;
			}
		}
	}
	estado=0;
	ataque=true;
}

Tablero::~Tablero() {
	// TODO Auto-generated destructor stub
}

void Tablero::setFigure(Cordenadas** coord, int size){
	for(int i=0;i<size;i++){
		data[coord[i]->getFila()][coord[i]->getColumna()]=1;
	}
}

string Tablero::infoAtaque(Cordenadas coord){

	string mensaje= "Ataque fallido!!!";
	if(data[coord.getFila()][coord.getColumna()]==1){
		mensaje = "Ataque con éxito ";
		data[coord.getFila()][coord.getColumna()]=2;
		ataque=true;
	}
	else ataque=false;

	if(contArmy()==0) cambiarEstado();
	return mensaje;
}
bool Tablero::getAtaque(){
	return ataque;
}

void Tablero::cambiarEstado(){
	if(estado==0){
			estado=1;
	}
	else{
		estado=0;
	}
}

int Tablero::contArmy(){
	int cont=0;
	for(int i=0;i<ancho;i++){
		for(int j=0;j<alto;j++){
			if(data[i][j]==1) cont++;
		}
	}
	return cont;
}

int Tablero::obtenerEstado(){
	return estado;
}

void Tablero::mostrar(){
	cout<<endl;
	for(int i=0;i<ancho;i++){
		for(int j=0;j<alto;j++){
			cout<<data[i][j];
		}
		cout<<endl;
	}

}
void Tablero::mostrar(int a){
	cout<<endl;
	for(int i=0;i<ancho;i++){
		for(int j=0;j<alto;j++){
			if(data[i][j]==2)cout<<'x';
			else cout<<0;
		}
		cout<<endl;
	}

}
