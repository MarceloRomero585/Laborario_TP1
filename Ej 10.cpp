//Nombre: MLR
//TP n�: 1
//Ej n�: 10
//Comentarios
/*
Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla a cuantos d�as y horas equivalen.
Ejemplo 1: si se ingresan 26 horas el programa mostrar� por pantalla que equivalen a 1 d�a y 2 horas.
Ejemplo 2: si se ingresan 72 horas el programa mostrar� por pantalla que equivalen a 3 d�as y 0 horas.
Ejemplo 3: si se ingresan 20 horas el programa mostrar� por pantalla que equivalen a 0 d�as y 20 horas.

*/
#include<iostream>
using namespace std;
int main(){

int total_hs, dias, hs;

cout<<"ingrese la cantidad de horas: ";
cin>>total_hs;

dias = total_hs / 24;
hs = total_hs%24;

cout<<"\nLas horas equivalen a: "<<dias<<" dias y "<< hs << " horas"<< endl;


return 0;
}
