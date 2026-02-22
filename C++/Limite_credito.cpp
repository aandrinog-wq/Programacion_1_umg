#include <iostream>
#include <iomanip>
using namespace std;
int main () {
int cuenta = 0;
float saldo = 0;
float cargos = 0;
float creditos = 0;
float saldo_nuevo = 0;
float limiteCredito = 0;

cout <<"Ingrese su numero de cuenta (0 -1 para salir): " << endl;
cin >> cuenta;

while (cuenta !=-1){
cout << "Ingrese su saldo inicial: " << endl;
cin >> saldo;
cout <<"Ingrese los cargos totales del mes: " <<endl;
cin >> cargos;
saldo_nuevo = saldo - cargos;
cout <<"Ingrese los creditos totales: " << endl;
cin >> creditos;
cout <<"Ingrese el limite de creditos: " <<endl;
cin >> limiteCredito;

saldo_nuevo = saldo + cargos - creditos;
cout <<"El saldo nuevo es: " << saldo_nuevo << endl;


if (saldo_nuevo>limiteCredito){
cout <<"El numero de cuenta es: " << cuenta << endl;
cout <<"Limite de credito: " << limiteCredito << endl;
cout <<"El saldo actual es: " << saldo_nuevo << endl;
cout <<"Se excedio el limite de su credito: " << endl;
}


cout <<"Ingrese su numero de cuenta (o ponga -1 para salir): "<< endl;
cin >> cuenta;
}
return 0;

}
