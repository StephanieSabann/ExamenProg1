//EXAMEN PROGRAMACIÓN INCISO 1
//STEPHANIE CRISTINA SABÁN CÁRCAMO 5090-23-11167
#include<iostream>
#include<stdio.h>
using namespace std;
int num;
bool esPrimo(int num);
int main(){
//pedimos el ingreso de datos
cout<<"Examen Stephanie Saban segunda serie inciso 1."<<endl;
cout<<"Ingrese un numero entero para evaluar si es primo o no: ";
cin>>num;
//usamos condicional if para mostrar el resultado según lo que retorna la funcion
if (esPrimo(num)){
cout<<"Es primo."<<endl;
}
else{
cout<<"No es primo."<<endl;
}
return 0;
}
bool esPrimo(int num){
system("cls");
//condiciones para casos especiales para calcular el numero primo
if (num == 0 || num == 1 || num == 4) return false;
for (int a = 2; a < num / 2; a++) {
if (num % a == 0) return false;
}
//si las condiciones anteriores no se pueden realizar retorna true
return true;
}
