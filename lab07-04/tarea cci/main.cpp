#include<iostream>
#include <cstdlib>
using namespace std;

//ejercicio 1
float millas_kilometros(){
    float m;
    cout<<"Ingrese millas: ";
    cin>>m;
    if(m>0)
        return m*1.60934;
    else
        return -1;
}

//ejercicio 2
void grados(){
    cout<<"Fahrenheit|Celsius"<<endl;
    for(int i=0;i<=300;i=i+20){
        cout<<"  "<<i<<" |   "<<(i-32)*0.5555<<endl;
    }
}

//ejercico 3
void numero_par(){
    int x;
    bool b=true;
    while(b){
        cout<<"Ingrese numero: ";
        cin>>x;
        if (x!=-1){
            if(x%2==0)
                cout<<"el numero es par"<<endl;
            else
                cout<<"el numero es impar"<<endl;
        }
        else
            b=false;
    }
}

//ejercico 4
int potencia(int a, int b){
	int c=1;
	for(int i=0;i<b;i++){
		c=c*a;
	}
	return c;
}
//ejercicio 5
void casse(){
	bool b=true;
	while(b){
		int n;
		cin>>n;
		switch(n){
		case -1:
			b=false;
			break;
		case 1:
			cout<<" Uno"<<endl;
			break;
		case 2:
			cout<<" Dos"<<endl;
			break;
		case 3:
			cout<<" Tres"<<endl;
			break;
		case 4:
			cout<<" Cuatro"<<endl;
			break;
		case 5:
			cout<<" Cinco"<<endl;
			break;
		case 6:
			cout<<" Seis"<<endl;
			break;
		case 7:
			cout<<" Siete"<<endl;
			break;
		case 8:
			cout<<" Ocho"<<endl;
			break;
		case 9:
			cout<<" Nueve"<<endl;
			break;
		default:
			cout<<"Numero no permitido"<<endl;
		}

	}
}
//ejercico 6

void ejercicio6(char cadena[]){
    string numero1;
    string numero2;
    int x=2;
    for(int i=2;cadena[i]!=' ';i++){
        numero1[i-2]=cadena[i];
        ++x;
    }
    x++;
    for(int i=x;cadena[i]!=' ';i++){
        numero2[i-x]=cadena[i];
    }

    float num1;
    float num2;
    num1=atof(numero1.c_str());
    num2=atof(numero2.c_str());
    switch(cadena[0]){
    case '+':
         cout<<num1+num2;
         break;
    case '-':
         cout<<num1-num2;
         break;
    case '*':
         cout<<num1*num2;
         break;
    case '/':
         cout<<num1/num2;
         break;
    default:
        cout<<"operacion no valida"<<endl;
    }


}
//ejercicio 7
void intercambiar(int &x,int &y){
	int z;
	z=x;
	x=y;
	y=z;
}

//ejercicio 8
void intercambiar_ptr(int *x,int *y){
	int z;
	z=*x;
	*x=*y;
	*y=z;
}

//ejercio 9
void insertion_sort(int arr[], int tam){
	int j, temp;

	for (int i = 0; i < tam; i++){
		j = i;

		while (j > 0 && arr[j] < arr[j-1]){
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
			  }
		}
}

//ejercicio 11

void mult_matrices(){
	int acol,afil,bcol,bfil;
	cout<<"Ingrese numero de filas de la matriz A: ";
	cin>>afil;
	cout<<"Ingrese numero de columnas de la matriz A: ";
	cin>>acol;
	int a[afil][acol];
	for(int i=0;i<afil;i++){
		for(int j=0;j<acol;j++){
			cout<<"ingrese numero de la posicion: "<<i<<","<<j<<": ";
			cin>>a[i][j];
		}
	}
	cout<<"Ingrese numero de filas de la matriz B: ";
	cin>>bfil;
	cout<<"Ingrese numero de filas de la matriz B: ";
	cin>>bcol;
	int b[bfil][bcol];
	for(int i=0;i<bfil;i++){
		for(int j=0;j<bcol;j++){
			cout<<"ingrese numero de la posicion: "<<i<<","<<j<<": ";
			cin>>b[i][j];
		}
	}
	if(acol==bfil){
		int c[afil][bcol];
		for(int i=0;i<afil;i++){
			for(int j=0;j<bcol;j++){
				c[i][j]=0;
			}
		}

		for(int i=0;i<afil;i++){
			for(int j=0;j<bcol;j++){
				for(int k=0;k<bfil;k++){
					c[i][j]+=a[i][k]*b[k][j];

				}
			}

		}
		cout<<endl;
		for(int i=0;i<afil;i++){
			for(int j=0;j<bcol;j++){
				cout<<c[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else{
		cout<<"no se pueden multilicar las matrices"<<endl;
	}

}

//ejercicio 14
int sumar(int a[],int n)
{
    if(n==1)
        return a[0];
    else
        return a[n-1]+sumar(a,n-1);
}
//ejercicio 15
int tamCadena(char cadena[]){
    int i;
    for(i=0;cadena[i]!='\0';i++);
    return i;
}
bool es_palindrome(char p[]){
	int n=tamCadena(p);
	int x;
	if (n%2==0)
		x=(n/2)+1;
	else
		x=n/2;

	for (int i=0;i<x;i++){
		if (p[i]!=p[n-1]){
			return false;
		}
		n--;

	}
	return true;
}
int main(){
    //cout<<millas_kilometros()<<endl;
    //grados();
    //numero_par();
	//cout<<potencia(5,0);
	//casse();
	//char cadena[]="- 50 3.6 ";
    //ejercicio6(cadena);
	/*
	int a,b;
	a=58;
	b=01;
	intercambiar_ptr(&a,&b);
	cout<<"a "<<a<<endl;
	cout<<"b "<<b<<endl;

	int array[]={5,2,8,63,4,0,8,6,7,1,9,85,2,1,18};
	insertion_sort(array,15);
	for (int i=0;i<15;i++){
		cout<<array[i]<<"-";
	}*/
	//mult_matrices();
	//int ar[]={1,2,3,4,5,6,7,8,9};
	//cout<<sumar(ar,9);
	//char p[]="anilina";
	//cout<<es_palindrome(p);

	return 0;
}

