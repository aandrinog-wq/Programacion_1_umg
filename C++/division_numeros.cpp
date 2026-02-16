#include <iostream>
using namespace std;
int main () {
int numeros = 0;
cout <<"Ingrese un numero de 5 digitos: ";
cin >> numeros;
int d1 = numeros/10000;
int d2 = (numeros/1000)%10;
int d3 = (numeros/100)%10;
int d4 = (numeros/10)%10;
int d5 = numeros%10;
cout << "El numero: " << numeros << " se dividen en: " << d1 << " " << d2 << " " << d3 << " " << d4 << " " << d5 << " " << endl;
return 0;
}
