
#include<iostream>
using namespace std;


int main() {
	int ed;
	int mi;
	int presente;
	// Variables
	// Asignacion de datos
	presente = 2026;
	ed = 0;
	mi = 0;
	// ingreso de datos
	cout << "Ingrese el allo en que nacio" << endl;
	cin >> mi;
	ed = presente-mi;
	cout << "Su edad es: " << ed << " Allos" << endl;
	return 0;
}

