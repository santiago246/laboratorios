#include <iostream>

using namespace std;
void mostrar(int arreglo[],int tam){
    for(int i=0;i<tam;i++){
        cout<<arreglo[i]<<endl;
    }
}
int suma(const int arreglo[],const int tam){
    int suma=0;
    for (int i=0;i<tam;suma+=arreglo[i++]);
    return suma;
}
float promedio(const int arreglo[],const int tam){
    return (float)suma(arreglo,tam)/tam;
}


/*
void invertir(int arreglo[], int tam){
    int a[tam];
    for( int i=0;i<tam;i++){
        a[i]=arreglo[i];
    }
    int b=tam-1;
    for(int i=0;i<tam;i++){
        arreglo[i]=a[b];
        b--;
    }
}*/

void invertir(int arreglo[],int tam){
    int temp;
    for(int i=1;i<=tam/2;i++){
        temp=arreglo[i-1];
        arreglo[i-1]=arreglo[tam-i];
        arreglo[tam-i]=temp;
    }
}
void ordenar(int arreglo[],int tam){
    int temp;
    for(int i=0;i<tam;i++){
        for(int j=i+1;j<tam;j++){
            if(arreglo[i]>arreglo[j]){
                temp=arreglo[i];
                arreglo[i]=arreglo[j];
                arreglo[j]=temp;
            }
        }
    }
}
int tamCadena(char cadena[]){
    int i;
    for(i=0;cadena[i]!='\0';i++);
    return i;
}
int main(){

    int tam;
    cout<<"Ingrese tamanio del arreglo: ";
    cin>>tam;
    int arreglo[tam];
    for (int i=0;i<tam;i++){
        cin>>arreglo[i];
    }
    //mostrar(arreglo,tam);
    cout<<"Suma: "<<suma(arreglo,tam)<<endl;
    cout<<"Promedio: "<<promedio(arreglo,tam)<<endl;
    //invertir(arreglo,tam);
    //mostrar(arreglo,tam);
    ordenar(arreglo,tam);
    mostrar(arreglo,tam);

    char cadena[]="hola que hace";
    cout<<tamCadena(cadena);
    return 0;
}
