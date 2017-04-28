/*
 * 13.cpp
 *
 *  Created on: 27 de abr. de 2017
 *      Author: BlizzMac
 */
#include<iostream>
using namespace std;
void reversaa(int *arreglo,int tam){
    int *temp1;
    int *temp2=arreglo;

    for(int i=1;i<=tam/2;i++){
    	*temp1=*arreglo;
    	*arreglo=*arreglo+(tam-1);
    	*arreglo=*temp1;
    	arreglo++;
    }
    *arreglo=*temp2;
}

int main(){

	int a[]={1,2,3,4,5,6,7,8};
	reversaa(a,8);
	for (int i=0;i<8;i++){
		cout<<a[i];
	}
	cout<<endl;

	//int *temp1=a;
	//int *temp2=a+7;

	//*a=*temp2;

	//int *temp3=temp1+1;
	//*a=*temp1;

	//reversaa(a,8);

	//cout<<*a;
	//cout<<*temp1;

	return 0;
}


