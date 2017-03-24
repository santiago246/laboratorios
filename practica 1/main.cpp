#include <iostream>

using namespace std;

int main()
{
    /*
    float pi=2.1416;
    float a,b;
    cout<<"ingrese el radio del circulo:";
    cin>>a;
    cout<<"el area del circulo es:"<<pi*(a*a)<<endl;
    cout<<"ingrese el lado del cuadrado:";
    cin>>a;
    cout<<"el area del cuadrado es:"<<a*a<<endl;
    cout<<"el perimetro del cuadrado es:"<<a*4<<endl;
    cout<<"ingrese la base del triangulo:";
    cin>>b;
    cout<<"ingrese la altura del triangulo:";
    cin>>a;
    cout<<"el area del triangulo es:"<<(b*a)/2<<endl;

    int x,y;
    x=11;
    y=20;
    x=x+y
    y=x-y
    x=x-y
    cout<<"y="<<y<<endl;
    cout<<"x="<<x<<endl;

    int a,b;
    cout<<"ingrese dos numeros a comparar"<<endl;
    cin>>a;
    cin>>b;
    if (a!=b){
        if(a>b)
            cout<<a<<"es el mayor"<<endl;
        else
            cout<<b<<"es el mayor"<<endl;
    }
    else:
            cout<<"son iguales"<<endl;
    */
    int a,b,c;
    cout<<"ingrese dos numeros a comparar"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if (a!=b and a!=c and b!=c){
        if(a>b and a>c)
            cout<<a<<" es el mayor"<<endl;
        else{
            if(b>c){
                cout<<b<<" es el mayor"<<endl;
            }
            else
                cout<<c<<" es el mayor"<<endl;
        }
    }
    else
            cout<<" son iguales"<<endl;

    return 0;
}
