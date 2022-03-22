//Nombre: MLR
//TP n°: 1
//Ej n°: 11
//Comentarios
/*
Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuántos días, horas y minutos equivalen.
Ejemplo 1: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1 día, 1 hora y 20 minutos.
Ejemplo 2: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0 día, 8 horas y 0 minutos.
*/
#include<iostream>
using namespace std;
int main(){

int min_totales = 0, rest_min = 0, dias, horas, minutos;

cout<<"Ingresar los minutos totales: "<<endl;
cin>>min_totales;

dias = min_totales / 1440;
rest_min = min_totales % 1440;
horas = rest_min / 60;
rest_min /=60;

cout<<"\nLos minutos ingresados corresponden a "<<dias<<" dias y "<<horas<< " horas y "<< rest_min <<" minutos."<<endl;

return 0;
}
