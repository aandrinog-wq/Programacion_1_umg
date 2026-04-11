#include <iostream>
using namespace std;


int enteroPotencia(int base, int exponente);
int main(){
int base, exponente;
cout <<"Ingrese el numero base: ";
cin >> base;
cout <<"Ingrese el numero exponente: ";
cin >> exponente;

cout <<"El resultado es: " << enteroPotencia(base, exponente) << endl;

return 0;
}

int enteroPotencia(int base, int exponente){
int resultado = 1;
for (int i = 1; i<=exponente; i++){
    resultado *= base;
}
return resultado;
}

