#include <iostream>
using namespace std;
int main () {

    int filas = 0; //
    int espacios = filas / 2;
    int asteriscos = 1;
cout <<"Ingrese un numero impar (entre 1 a 19): " << endl;
cin >> filas;
if (filas % 2 == 0 || filas < 1 || filas > 19){
    cout <<"Debe ser un numero impar." << endl;
}

    for (int i = 1; i <= (filas / 2) + 1; i++) {
        for (int j = 1; j <= espacios; j++) cout << " ";
        for (int j = 1; j <= asteriscos; j++) cout << "*";
        cout << endl;

        espacios--;
        asteriscos += 2;
    }
    espacios = 1;
    asteriscos = filas - 2;
    for (int i = 1; i <= filas / 2; i++) {
        for (int j = 1; j <= espacios; j++) cout << " ";
        for (int j = 1; j <= asteriscos; j++) cout << "*";
        cout << endl;

        espacios++;
        asteriscos -= 2;
    }
return 0;
}
