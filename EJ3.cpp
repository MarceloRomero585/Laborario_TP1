//Nombre: Marcelo Romero
//TP n°: 1
//Ej n°: 3
//Comentarios
/*
Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 15.000 más $ 2.000 de premio por cada auto vendido.
Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar por pantalla
el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $ 23.000.

*/
#include<iostream>
using namespace std;
int main(){

const int fijo = 15000;
const int comision = 2000;
int cant_autos;
int sueldo_final;

cout<<"ingrese la cantidad de auto vendidos en el periodo: ";
cin>>cant_autos;

sueldo_final= fijo + (comision * cant_autos);

cout<<"El sueldo del periodo seria: $"<<sueldo_final<<endl;

return 0;
}
