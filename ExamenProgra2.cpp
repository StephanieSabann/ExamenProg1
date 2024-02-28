//EXAMEN PROGRAMACIÓN INCISO 3
//STEPHANIE CRISTINA SABÁN CÁRCAMO 5090-23-11167
#include<iostream>
#include<stdio.h>
using namespace std;
//Declaración de variables a utilizar
float a = 0;
float b = 0;
float resultado = 0;
//Declaración de las funciones
void suma();
void resta();
void multiplicacion();
void division();
int main()
{
   cout<<"Examen Stephanie Saban segunda serie inciso 3."<<endl;
//llamado de las funciones de las operaciones en la función principal
   suma();
   resta();
   multiplicacion();
   division();
}
//integración de las funciones en sí
void suma() {
	cout<<"SUMA"<<endl;
	cout<<"ingresa el primer valor: "<<endl;
    cin>>a;
    cout<<"ingresa el primer valor: "<<endl;
    cin>>b;
    resultado=a+b;
    cout<<"El resultado es: "<<resultado<<endl;
}
void resta() {
	cout<<endl<<"RESTA"<<endl;
	cout<<"ingresa el primer valor: "<<endl;
    cin>>a;
    cout<<"ingresa el primer valor: "<<endl;
    cin>>b;
    resultado=a-b;
    cout<<"El resultado es: "<<resultado<<endl;
}
void multiplicacion() {
	cout<<endl<<"MULTIPLICACION"<<endl;
	cout<<"ingresa el primer valor: "<<endl;
    cin>>a;
    cout<<"ingresa el primer valor: "<<endl;
    cin>>b;
    resultado=a*b;
    cout<<"El resultado es: "<<resultado<<endl;
}
void division() {
	cout<<endl<<"DIVISION"<<endl;
	cout<<"ingresa el primer valor: "<<endl;
    cin>>a;
    cout<<"ingresa el primer valor: "<<endl;
    cin>>b;
    resultado=a/b;
    cout<<"El resultado es: "<<resultado<<endl;
}
