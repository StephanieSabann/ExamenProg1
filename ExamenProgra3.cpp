//EXAMEN PROGRAMACIÓN INCISO 2
//STEPHANIE CRISTINA SABÁN CÁRCAMO 5090-23-11167
#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
void raiz();
float raizz;
int entero;
int main(){
raiz();
return 0;
}
void raiz(){
	cout<<"Examen Stephanie Saban segunda serie inciso 2."<<endl;
	cout<<"Ingrese un numero entero a la cual se le calculara la raiz cuadrada: ";
	cin>>entero;
	raizz=sqrt(entero);
	cout<<"El resultado de la raiz cuadrada de "<<entero<<" es: "<<raizz<<endl;
}