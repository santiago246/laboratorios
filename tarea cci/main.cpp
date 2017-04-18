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

int main(){
    //cout<<millas_kilometros()<<endl;
    //grados();
    //numero_par();
	//cout<<potencia(5,0);
	//casse();
	char cadena[]="- 50 3.6 ";
    ejercicio6(cadena);
	return 0;
}
