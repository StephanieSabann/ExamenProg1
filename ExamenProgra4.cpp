//EXAMEN STEPHANIE CRISTINA SABÁN CÁRCAMO
//STEPHANIE CRISTINA SABÁN CÁRCAMO 5090-23-11167
#include<iostream>
#include<stdio.h>
using namespace std;
int num;
void SumaNu();
int main(){
cout<<"Examen Stephanie Saban segunda serie inciso 4."<<endl;
cout<<"Ingrese un numero entero positivo: ";
cin>>num;
SumaNu();
return 0;
}
void SumaNu(){
	int suma=0;
	for(int i=1;i<=num;i++){
		suma=suma+i;
	    cout<<i<<", ";
	}
	cout<<"\nLa suma de los enteros positivos es: "<<suma<<endl;
}

