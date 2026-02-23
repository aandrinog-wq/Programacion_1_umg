#include <iostream>
using namespace std;
int main () {
int cantidad = 0;
int numero_actual = 0;
int menor = 0;
cout <<"Ingrese la cantidad de numero: " << endl;
cin >> cantidad;
cout <<"Ingrese los valores: " << endl;
cin >> menor;
for (int i = 1; i < cantidad; i++){
        cin >> numero_actual;
    if (numero_actual < menor) {
        menor = numero_actual;
    }
}
cout <<"El entero mas chico es: " << menor << endl;
return 0;
}
