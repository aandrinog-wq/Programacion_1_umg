#include <iostream>
using namespace std;
int main () {
double numero_actual = 0;
double promedio = 0;
double suma = 0;
int contador = 0;
cout <<"Ingrese los valores: " <<endl;
cin >> numero_actual;

for(;numero_actual != 9999;){
    suma = suma + numero_actual;
    contador++;

    cout <<"Ingrese otro numero o (escriba 9999 para terminar): " << endl;
    cin >> numero_actual;
}
promedio = suma/contador;
cout <<"El resultado es: " << promedio << endl;
return 0;
}
