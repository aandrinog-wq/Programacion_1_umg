#include <iostream>
using namespace std;
int main () {
int numero = 0;
int digi1 = 0;
int digi2 = 0;
int digi3 = 0;
int digi4 = 0;
int origi1 = 0;
int origi2 = 0;
int origi3 = 0;
int origi4 = 0;
cout <<"Ingrese el numero cifrado: " << endl;
cin >> numero;
digi1 = numero / 1000;
digi2 = (numero/100)%10;
digi3 = (numero/10)%10;
digi4 = numero%10;

origi1 = (digi1 + 3)%10;
origi2 = (digi2 + 3)%10;
origi3 = (digi3 + 3)%10;
origi4 = (digi4 + 3)%10;

cout <<"Numero descrifrado: " << origi3 << origi4 << origi1 << origi2 << endl;
return 0;
}
