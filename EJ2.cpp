//Nombre: Marcelo Romero
//TP n°: 1
//Ej n°: 2
//Comentarios
/*Hacer un programa que solicite por teclado que se ingresen dos números y luego
guardarlos en dos variables distintas. A continuación se deben intercambiar
mutuamente los valores en ambas variables y mostrarlos por pantalla.
Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables
usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.*/

#include<iostream>
using namespace std;
int main(){

int a, b, aux=0;

cout<<"ingrese el valor de la variable a: ";
cin>>a;
cout<<"ingrese el valor de la variable b: ";
cin>>b;

aux = a;
a = b;
b = aux;

cout<<"\nEl valor de la variable a es: "<<a<<endl;
cout<<"\nEl valor de la variable b es: "<<b<<endl;


return 0;
}
