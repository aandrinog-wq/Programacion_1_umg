
#include<iostream>
using namespace std;


int main() {
	float c1;
	float c2;
	float masa;
	float presion;
	float temperatura;
	float volumen;
	// Constante
	c1 = 0.37;
	c2 = 460;
	// Entrada de datos por parte del ususario
	cout << "Ingrese la presion: " << endl;
	cin >> presion;
	cout << "Ingrese el volumen: " << endl;
	cin >> volumen;
	cout << "Ingrese la temperatura: " << endl;
	cin >> temperatura;
	// Proceso
	masa = (presion*volumen)/(c1+temperatura+c2);
	// Salida de datos del ususario
	cout << "La masa resultante es: " << masa << endl;
	return 0;
}

