//Nombre: MLT
//TP n°: 1
//Ej n°: 5
//Comentarios

/*Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar por teclado
la cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas
para cada una de ellas.
Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará
A: 50%, B: 12,50% y C: 37,50%.
*/
#include<iostream>
using namespace std;

int main(){
int a, b, c;
float total, por_a, por_b, por_c;

cout<<"Ingresar la cantidad de alfajores vendido de la marca a: "<<endl;
cin>>a;

cout<<"\nIngresar la cantidad de alfajores vendido de la marca b: "<<endl;
cin>>b;

cout<<"\nIngresar la cantidad de alfajores vendido de la marca c: "<<endl;
cin>>c;


total = a + b + c;

por_a = (a / total) * 100;
por_b = (b / total) * 100;
por_c = (c / total) * 100;

cout.precision(3);
cout<<"\n\nLas ventas porcentuales del periodo son"<<endl;
cout<<por_a<<"%;"<<endl;
cout<<por_b<<"%;"<<endl;
cout<<por_c<<"%."<<endl;

return 0;
}
