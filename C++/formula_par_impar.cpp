
#include<iostream>
using namespace std;
int main() {
	int valor;
	cout << "Ingrese un valor numerico: " << endl;
	cin >> valor;
	if (valor%2==0) {
		cout << "El valor: " << valor << " es par" << endl;
	} else {
		cout << "El valor: " << valor << " es impar" << endl;
	}
	return 0;
}
