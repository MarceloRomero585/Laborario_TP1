//Nombre: Marcelo Romero
//TP n°: 1
//Ej n°: 4
//Comentarios
/*
Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avión
y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación y el
porcentaje de no ocupación del mismo.
Ejemplo si el avión tiene 200 asientos disponibles y se vendieron 80 pasajes, el porcentaje de ocupación
que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.
*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
float asientos_disponible = 0 , pasajes_vendidos = 0, total = 0;
float ocupacion, disponibles;

cout<<"ingresar la cantidad de asientos disponibles: "; cin>> asientos_disponible;
cout<<"\nIngresar la cantidad de pasajes vendidos: "; cin>> pasajes_vendidos;

total = asientos_disponible + pasajes_vendidos;
ocupacion = (pasajes_vendidos / total) * 100;
disponibles = (asientos_disponible / total) * 100;

cout<<"\nEl total de ocupacion es: "<< ocupacion <<"%"<<endl;
cout<<"\nEl total de asientos disponible es: "<< disponibles <<"%"<<endl;

getch();
return 0;
}
