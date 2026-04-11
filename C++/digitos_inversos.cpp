#include <iostream>
using namespace std;

int invertirDigitos(int n);
int main(){
int numero;

cout <<"Ingrese un numero: ";
cin >> numero;


cout <<"El numero que ingreso al invertirlo es: " << invertirDigitos(numero) << endl;

return 0;
}
int invertirDigitos(int n){
    int invertido = 0;
while (n > 0){
        int residuo = n % 10;
        invertido = (invertido * 10) + residuo;
        n = n / 10;
}
return invertido;
}
