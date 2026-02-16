#include <iostream>
using namespace std;

int main () {
float radio = 0;

cout <<"Ingrese el radio: ";
cin >> radio;

cout << "El diametro es de: " << 2 * radio << endl;
cout << "La circunferencia es de: " << 2 *  3.14159 * radio << endl;
cout << "El area es de: " << 3.14159 * (radio * radio) << endl;
return 0;
}
