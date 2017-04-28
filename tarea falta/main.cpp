#include <iostream>

using namespace std;

void reversa(int *arreglo,int tam){
    int temp1=*arreglo;
    int temp2=*(arreglo+(tam-1));

    for(int i=0;i<tam/2;i++){
        *(arreglo+i)=temp2;
        *(arreglo+(tam-i-1))=temp1;
        temp1=*(arreglo+i+1);
        temp2=*(arreglo+(tam-i-2));
    }
}
int main()
{
    int c[]={1,2,3,4,5,6,7,8};
	reversa(c,8);
	for (int i=0;i<8;i++){
		cout<<c[i];
	}
	cout<<endl;

    return 0;
}
