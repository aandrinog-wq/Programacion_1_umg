#include <iostream>
using namespace std;
int main () {
double radio = 0;
double pi = 3.14159;

cout <<"Ingrese el radio: " << endl;
cin >> radio;
cout <<"El diametro es: " << radio * 2 << endl;
cout <<"La circunferencia es: " << 2 * pi * radio << endl;
cout <<"El area es: " << pi * (radio * radio) << endl;
return 0;
}
