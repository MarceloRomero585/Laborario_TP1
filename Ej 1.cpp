//Nombre:Marcelo Romero
//TP n°: 1
//Ej n°: 1
//Comentarios
/*Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por
 un operario y el valor que se le paga por hora trabajada y listar por pantalla el
 sueldo que le corresponda*/

#include<iostream>
using namespace std;
int main(){

int horas;
float valor_hs;
int total=0;

cout<<"Ingrese la cantidas de horas trabajadas: "<<endl;
cin>> horas;
cout<<"\nIngrese el valor hora de este operario: "<<endl;
cin>>valor_hs;

total = horas * valor_hs;

cout<<"\nEl sueldo que le corresponde al empleado son: $"<<total<<endl;

return 0;
}
