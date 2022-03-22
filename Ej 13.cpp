//Nombre: MLR
//TP n°: 1
//Ej n°: 13
//Comentarios
/*
Hacer un programa para un cajero automático para ingresar un importe a retirar y convertir el
mismo en la cantidad de billetes de $ 1.000, $ 500, $ 200 y $ 100 a entregar.
Ejemplo 1: Si el importe a retirar es $ 2.500 se mostrará por pantalla que se deberán entregar 2 billetes
de $ 1.000, 1 billete de $ 500 y 0 billetes de $ 200 y $ 100.
Ejemplo 2: Si el importe a retirar es $ 3.400 se mostrará por pantalla que se deberán entregar 3 billetes
de $ 1.000, 2 billetes de $ 200 y 0 billetes de $ 500 y $ 100.
Ejemplo 3: Si el importe a retirar es $ 300 se mostrará por pantalla que se deberán entregar 1 billete de
$ 200, 1 billete de $ 100, 0 billetes de $ 1.000 y 0 billetes de $ 500.
Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos múltiplo de $ 100
ya que el cajero no cuenta con billetes de $ 50, $ 20 o $ 10.
*/

#include<iostream>
using namespace std;
int main(){
int monto, millar, res_millar, quiniento, res_quiniento, dociento, res_dociento, cien, res_cien;

cout<<"Ingrese el monto a retirar (debe ser un valor multiplo de $100): $";
cin>>monto;

millar = monto / 1000;
res_millar = monto % 1000;

quiniento = res_millar / 500;
res_quiniento = res_millar % 500;

dociento = res_quiniento / 200;
res_dociento = res_quiniento % 200;

cien = res_dociento /100;

cout<<"\nSe entregara: "<<endl;
cout<<millar<<" billetes de $1000"<<endl;
cout<<quiniento<<" billetes de $500"<<endl;
cout<<dociento<<" billetes de $200"<<endl;
cout<<cien<<" billetes de $100"<<endl;

return 0;
}
