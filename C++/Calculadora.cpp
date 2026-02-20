#include <iostream>
using namespace std;

int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
int modulo(int a, int b);

int main() {

    int numero1, numero2;
    int opcion;

    cout << "Escriba el primer numero: ";
    cin >> numero1;

    cout << "Escriba el segundo numero: ";
    cin >> numero2;

    cout << "Seleccione la operacion:" << endl;
    cout << "1. +" << endl;
    cout << "2. -" << endl;
    cout << "3. *" << endl;
    cout << "4. /" << endl;
    cout << "5. %" << endl;
    cin >> opcion;

    switch(opcion) {

        case 1:
            cout << "Resultado: " << sumar(numero1, numero2) << endl;
            break;

        case 2:
            cout << "Resultado: " << restar(numero1, numero2) << endl;
            break;

        case 3:
            cout << "Resultado: " << multiplicar(numero1, numero2) << endl;
            break;

        case 4:
            cout << "Resultado: " << dividir(numero1, numero2) << endl;
            break;

        case 5:
            cout << "Resultado: " << modulo(numero1, numero2) << endl;
            break;

        default:
            cout << "Opcion no valida" << endl;
    }

    return 0;
}
int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}
float dividir(int a, int b) {
    if (b == 0) {
        cout << "No se puede dividir entre cero." << endl;
        return 0;
    }
    return (float)a / b;
}
int modulo(int a, int b) {
    return a % b;
}
