#include<iostream>
#include<cctype>
using namespace std;

int main() {
	float acumretiro;
	int contador1;
	int contador2;
	int contretiro;
	float desc;
	float final;
	float inicial;
	float maxretirado;
	float mindeposito;
	float monto;
	string nombre;
	float promretiro;
	char respuesta;   // ← CAMBIO AQUÍ
	int tipo;

	mindeposito = -1;
	maxretirado = -1;
	promretiro = 0;
	acumretiro = 0;
	contretiro = 0;
	contador1 = 0;
	contador2 = 0;

	cout << "Ingrese su nombre" << endl;
	cin >> nombre;

	cout << "Ingrese saldo inicial" << endl;
	cin >> inicial;

	final = inicial;

	do {
		cout << "Seleccione" << endl;
		cout << "[D] Deposito" << endl;
		cout << "[R] Retiro " << endl;
		cout << "[F] Fin" << endl;

		cin >> respuesta;
		respuesta = toupper(respuesta);  // ← Para aceptar minusculas

		switch (respuesta) {

		case 'D':   // ← COMILLAS SIMPLES
			cout << "Tipo: " << endl;
			cout << "[1] Efectivo" << endl;
			cout << "[2] Cheque" << endl;
			cin >> tipo;

			cout << "Ingrese la cantidad a depositar:" << endl;
			cin >> monto;

			if (mindeposito == -1 || monto < mindeposito) {
				mindeposito = monto;
			}

			desc = 0;

			if (tipo == 1) {
				contador1 = contador1 + 1;
			}
			else {
				desc = monto * 0.01;
				contador2 = contador2 + 1;
			}

			final = final + monto - desc;

			cout << "Comision: " << desc << endl;
			cout << "**********************************" << endl;
			cout << "Su nuevo saldo es: " << final << endl;
			cout << "**********************************" << endl;
			break;

		case 'R':   // ← COMILLAS SIMPLES
			cout << "Ingrese el monto a retirar" << endl;
			cin >> monto;

			if (monto <= final) {
				final = final - monto;
				acumretiro = acumretiro + monto;
				contretiro = contretiro + 1;

				if (maxretirado == -1 || monto > maxretirado) {
					maxretirado = monto;
				}
			}
			else {
				cout << "Sobregiro" << endl;
			}

			cout << "**********************************" << endl;
			cout << "Su nuevo saldo es: " << final << endl;
			cout << "**********************************" << endl;
			break;

		case 'F':
			break;

		default:
			cout << "Opcion incorrecta" << endl;
		}

	} while (respuesta != 'F');   // ← CAMBIO AQUÍ

	// Evitar división entre 0
	if (contretiro > 0) {
		promretiro = acumretiro / contretiro;
	}
	else {
		promretiro = 0;
	}

	cout << "Nombre: " << nombre << endl;
	cout << "Saldo inicial: " << inicial << endl;
	cout << "Saldo final: " << final << endl;
	cout << "N° de depositos en efectivo: " << contador1 << endl;
	cout << "N° de depositios en cheque: " << contador2 << endl;
	cout << "El monto minimo depositado fue: " << mindeposito << endl;
	cout << "Promedio de retiro es: " << promretiro << endl;
	cout << "El monto maximo retirado fue: " << maxretirado << endl;

	return 0;
}
