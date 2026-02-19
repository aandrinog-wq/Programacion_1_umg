#include<iostream>
using namespace std;

int main() {
	int division;
	int modulo;
	int multiplicacion;
	int numero1;
	int numero2;
	int resta;
	float signo;
	int suma;
	numero1 = 0;
	numero2 = 0;
	cout << "Escriba el primer numero a operar" << endl;
	cin >> numero1;
	cout << "Escriba el segundo numero a operar" << endl;
	cin >> numero2;
	cout << "Escriba el numero para la operacion que quiera realizar" << endl;
	cout << "1. +" << endl;
	cout << "2. -" << endl;
	cout << "3. *" << endl;
	cout << "4. /" << endl;
	cout << "5. %" << endl;
	cin >> signo;
	if (signo==1) {
		suma = numero1+numero2;
		cout << "El resultado de la Suma es de: " << suma << endl;
	}
	if (signo==2) {
		resta = numero1-numero2;
		cout << "El resultado de la Resta es de: " << resta << endl;
	}
	if (signo==3) {
		multiplicacion = numero1*numero2;
		cout << "El resultado de la Multiplicacion es de: " << multiplicacion << endl;
	}
	if (signo==4) {
		division = numero1/numero2;
		cout << "El resultado de la Division es: " << division << endl;
	}
	if (signo==5) {
		modulo = numero1%numero2;
		cout << "El resultado del Modulo es: " << modulo << endl;
	}
	return 0;
}

