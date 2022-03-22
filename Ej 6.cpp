//Nombre:
//TP n°:
//Ej n°:
//Comentarios
/*
Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada
una de las cuatros semanas del mes. El programa debe listar la recaudación promedio por semana y
el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudación promedio
$ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
*/
#include<iostream>

using namespace std;
int main(){
float sem_1, sem_2, sem_3, sem_4, total = 0;
float promedio, por_s1, por_s2, por_s3, por_s4;

cout<<"Ingrese la reacaudacion de la primera semana del mes: $"; cin>> sem_1;
cout<<"\nIngrese la reacaudacion de la segunda semana del mes: $"; cin>> sem_2;
cout<<"\nIngrese la reacaudacion de la tercera semana del mes: $"; cin>> sem_3;
cout<<"\nIngrese la reacaudacion de la cuarta semana del mes: $"; cin>> sem_4;

total = sem_1 + sem_2 + sem_3 + sem_4;
promedio = total / 4;
por_s1 = (sem_1 / total) * 100;
por_s2 = (sem_2 / total) * 100;
por_s3 = (sem_3 / total) * 100;
por_s4 = (sem_4 / total) * 100;


cout<<"\nEl ingreso promedio del mes por semana fue de: $"<< promedio <<endl;
cout.precision(2);
cout<<"\nEl porcentaje por semana fue el siguiente:"<<endl;
cout<<por_s1<<" %;"<<endl;
cout<<por_s2<<" %;"<<endl;
cout<<por_s3<<" %;"<<endl;
cout<<por_s4<<" %."<<endl;

return 0;
}
