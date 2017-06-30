
#ifndef TABLERO_H_
#define TABLERO_H_

#include <iostream>
using namespace std;
class Cordenadas{
	int row,col;
public:
	Cordenadas(int r,int c):row(r),col(c){}
	int getFila();
	int getColumna();
};

class Tablero {
	int **data=NULL;
	int ancho;
	int alto;
	int numFiguras;
	int estado;
	int contArmy();
	bool ataque;
public:
	Tablero(int w,int h);
	void setFigure(Cordenadas**,int size);
	string infoAtaque(Cordenadas);
	bool getAtaque();
	void cambiarEstado();
	int obtenerEstado();
	void mostrar();
	void mostrar(int);

	~Tablero();
};

#endif /* TABLERO_H_ */
