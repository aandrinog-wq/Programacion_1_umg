#include<iostream>
using namespace std;


int main() {
	float descuento;
	float edad;
	float monto;
	string nombre;

	monto = 0;

	cout << "Ingrese su Nombre: " << endl;
	cin >> nombre;
	cout << "Ingrese su Edad: " << endl;
	cin >> edad;
	cout << "Ingrese su salario anual: " << endl;
	cin >> monto;

	if (monto<10000) {
		descuento = monto*0.005;
	} else {
		if (monto>=10000 && monto<=19999) {
			descuento = monto*0.01;
		} else {
			if (monto>=20000 && monto<=29999) {
				descuento = monto*0.02;
			} else {
				descuento = monto*0.025;
			}
		}
	}
	if (edad<=30) {
		descuento = descuento+(descuento*0.20);
	}

	cout << "Su Nombre es: " << nombre << endl;
	cout << "Su Edad es: " << edad << endl;
	cout << "Su Salario anual es de: " << monto << endl;
	cout << "El aporte del sindicato es de: " << descuento << endl;
	return 0;
}

