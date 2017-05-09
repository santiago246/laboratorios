#include <iostream>

using namespace std;

float numero(char x){
    switch(x){
        case '1':
            return 1;
            break;
        case '2':
            return 2;
            break;
        case '3':
            return 3;
            break;
        case '4':
            return 4;
            break;
        case '5':
            return 5;
            break;
        case '6':
            return 6;
            break;
        case '7':
            return 7;
            break;
        case '8':
            return 8;
            break;
        case '9':
            return 9;
            break;
        default:
            return 0;
            break;

    }
}

int longitud(char *a){
    int x=0;
    while(*(a+x++)!='\0');
    return x-1;
}


float convertir(char *c){
    float num;
    bool b;
    int tam;
    tam=longitud(c);
    char m[tam];

    int y=0;
    int i=0;
    while(c[i]!='\0'){
        m[i]=c[i];
        if (c[i]=='.'){
            b=true;
            break;
        }
        i++;
    }
    if (b){
        y=tam-i-1;
        int z=i;
        int p=i;
        while(c[z+1]!='\0'){
            m[p++]=c[z+1];
            z++;
        }
    }
    int lon=y+i;
    float p=1;
    int w=0;
    for(int j=1;j<i;j++)
        p=p*10;
    float h;
    for(int j=0;j<lon;j++){
        h=numero(m[w]);
        num=num+(p*h);
        w++;
        p=p/10;
    }
    return num;

}
void cambio1(int &a,int &b){
    int temp =a;
    a=b;
    b=temp;
}
void cambio2(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void cambio3(int **a,int **b){
    int *temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    char g[]="123.587";
    cout<<convertir(g);
    cout<<endl;
    //valore puntero a pubntero
    /*
    int a=7;
    int b=56;
    int *x=&a;
    int *y=&b;
    cambio3(&x,&y);
    cout<<"x:"<<*x<<endl;
    cout<<"y:"<<*y<<endl;
    */
    return 0;
}
