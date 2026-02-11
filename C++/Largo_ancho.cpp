
#include<iostream>
using namespace std;


int main() {
	int alambre;
	int ancho;
	float area;
	int largo;
	int perimetro;
	int precio_m2;
	int precio_terreno;
	// Variables
	// Asignacion
	ancho = 0;
	largo = 0;
	precio_m2 = 0;
	// Ingreso de datos
	cout << "Ingrese los metros del ancho: " << endl;
	cin >> ancho;
	cout << "Ingrese los metros de largo: " << endl;
	cin >> largo;
	cout << "Ingrese el precio por m^2: " << endl;
	cin >> precio_m2;
	// Calculos
	area = ancho*largo;
	precio_terreno = area*precio_m2;
	perimetro = 2*(ancho+largo);
	alambre = perimetro*3;
	// Resultados
	cout << "El Area es: " << area << endl;
	cout << "El Precio del terreno es de: " << precio_terreno << endl;
	cout << "El Perimetro es: " << perimetro << endl;
	cout << "El Alambre necesario es de: " << alambre << endl;
	return 0;
}

