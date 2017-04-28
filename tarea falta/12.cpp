/*
 * 12.cpp
 *
 *  Created on: 27 de abr. de 2017
 *      Author: BlizzMac
 */

void reversa(int arreglo[],int tam){
    int temp;
    for(int i=1;i<=tam/2;i++){
        temp=arreglo[i-1];
        arreglo[i-1]=arreglo[tam-i];
        arreglo[tam-i]=temp;
    }
}


