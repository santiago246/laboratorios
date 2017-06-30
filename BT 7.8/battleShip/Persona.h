/*
 * Persona.h
 *
 *  Created on: 30 de jun. de 2017
 *      Author: BlizzMac
 */

#ifndef PERSONA_H_
#define PERSONA_H_
#include <iostream>
using namespace std;
class Persona {
	string nombre;

	int edad;
public:
	Persona();
	Persona(string,int);
	virtual string getNombre();
	int getEdad();




	virtual ~Persona();
};

#endif /* PERSONA_H_ */
