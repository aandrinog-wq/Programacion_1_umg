#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float valor1 = 0;
    float valor2 = 0;

    cout << "Ingrese un valor: ";
    cin >> valor1;

    cout << "Ingrese un segundo valor: ";
    cin >> valor2;

    cout << fixed << setprecision(2);

    cout << "El resultado de la suma es: " << valor1 + valor2 << endl;
    cout << "El resultado del producto es: " << valor1 * valor2 << endl;
    cout << "La diferencia es de: " << valor1 - valor2 << endl;

    if (valor2 != 0)
        cout << "El cociente es: " << valor1 / valor2 << endl;
    else
        cout << "No se puede dividir entre 0" << endl;

    return 0;
}
