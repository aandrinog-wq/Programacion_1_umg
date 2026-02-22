#include <iostream>
using namespace std;

int main () {
int cantidad_numeros = 0;
int N1 = 0;
int N2 = 0;
int N3 = 0;
int N4 = 0;
int N5 = 0;

cout <<"Ingrese un numero de 5 digitos: " << endl;
cin >> cantidad_numeros;
while (cantidad_numeros < 10000 || cantidad_numeros > 99999){
    cout <<"Este numero tiene mas de 5 digitos. Intenta de nuevo: " <<endl;
    cin >> cantidad_numeros;
}
N1 = cantidad_numeros / 10000;
N2 = (cantidad_numeros/1000)%10;
N3 = (cantidad_numeros/100)%10;
N4 = (cantidad_numeros/10)%10;
N5 = cantidad_numeros%10;

if (N1 == N5 && N2 == N4){
    cout <<"El numero " << cantidad_numeros << " es palindromo" << endl;
}
else {
    cout << "El numero " << cantidad_numeros << " no es palindromo" << endl;
}
return 0;

}
