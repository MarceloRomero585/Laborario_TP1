//Nombre:MLR
//TP n°: 1
//Ej n°: 7
//Comentarios
/*
Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada
a la misma y luego informar por pantalla el importa a pagar.
Ejemplo 1. Si el importe de la venta es $ 1.200 y el descuento es el 15% entonces el total a pagar será de $ 1.020.
Ejemplo 2. Si el importe de la venta es $ 800 y el descuento es el 0% entonces el total a pagar será de $ 800.

*/
#include<iostream>
#include<conio.h>

using namespace std;
int main(){
float valor, descuento, total;

cout<<"Ingrese el importe de la venta realizada: $";
cin>>valor;
cout<<"\nIngre el % de descuento para la venta realizada: "; cin>>descuento;

total = valor * (1-(descuento/100));

cout<<"\nEl valor de la venta es: $"<<valor<<" El descuento es: "<<descuento<<" %"<<" El importe a pagar es: $"<<total;
cout<<endl;


getch();
return 0;
}
