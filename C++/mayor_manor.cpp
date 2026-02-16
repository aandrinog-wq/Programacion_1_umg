#include <iostream>
using namespace std;

int main () {

int valor1 = 0;
int valor2 = 0;

cout <<"Ingrese un numero: ";
cin >> valor1;

cout <<"Ingrese otro numero ";
cin >> valor2;

if (valor1>valor2)
{
cout <<"El numero " << valor1 << " es mayor a " << valor2;
}

if (valor1<valor2)
{
cout <<"El numero " << valor2 << " es mayor a " << valor1;
}

if (valor1 == valor2) {
cout <<"Los numeros son del mismo valor";
}
}
