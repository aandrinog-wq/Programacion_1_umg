
#include<iostream>
using namespace std;


int main() {
	int cafe;
	int huevo;
	int menu;
	float monto;
	int postre;
	int tocino;
	// Asignacion de valores
	huevo = 5;
	tocino = 9;
	cafe = 8;
	postre = 10;
	monto = 0;
	// Menu de la cafeteria
	do {
		cout << "Menu de cafeteria" << endl;
		cout << "1. Huevos = Q5" << endl;
		cout << "2. Cafe = Q8" << endl;
		cout << "3. Postres = Q10" << endl;
		cout << "4. Tocino = 	Q9" << endl;
		cout << "5. TOTAL" << endl;
		cout << "Elija un numero de opcion: " << endl;
		cin >> menu;
		// Condicciones
		if (menu==1) {
			cout << "Eligio Huevos" << endl;
			monto = monto+huevo;
		}
		if (menu==2) {
			cout << "Eligio un Cafe" << endl;
			monto = monto+cafe;
		}
		if (menu==3) {
			cout << "Eligio un Postre" << endl;
			monto = monto+postre;
		}
		if (menu==4) {
			cout << "Eligio Tocino" << endl;
			monto = monto+tocino;
		}
	} while (menu!=5);
	if (menu==5) {
		cout << "Gracias por venir su total es de: " << monto << endl;
	}
	return 0;
}

