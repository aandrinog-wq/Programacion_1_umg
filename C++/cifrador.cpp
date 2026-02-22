#include <iostream>
using namespace std;
int main () {
int d1 = 0;
int d2 = 0;
int d3 = 0;
int d4 = 0;
int N1 = 0;
int N2 = 0;
int N3 = 0;
int N4 = 0;
int N5 = 0;
int numero = 0;
cout <<"Ingrese un numero de 4 digitos: " << endl;
cin >> numero;
d1 = numero / 1000;
d2 = (numero/100)%10;
d3 = (numero/10)%10;
d4 = numero%10;

N1 = (d1 + 7)%10;
N2 = (d2 + 7)%10;
N3 = (d3 + 7)%10;
N4 = (d4 + 7)%10;

cout <<"Numero cifrado: " << endl;
cout << N3 << N4 << N1 << N2 << endl;
return 0;

}
