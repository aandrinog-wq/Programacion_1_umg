#include <iostream>
using namespace std;

int main () {
int digito = 0;

cout <<"Ingrese un digito: ";
cin >> digito;

if (digito%2==0) {
cout <<"El numero " << digito << " es par" << endl;
}
else {
cout <<"El numero " << digito << " es impar" << endl;
}
return 0;
}
