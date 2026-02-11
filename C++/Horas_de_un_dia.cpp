
#include<iostream>
using namespace std;

int main() {
	float hora;
	int madio2;
	int madru1;
	int madru2;
	int madru3;
	int madru4;
	int madru5;
	int madru6;
	int mana;
	float mana1;
	int mana2;
	int mana3;
	int mana4;
	int mana5;
	int mana6;
	int medio1;
	float medio2;
	int noche1;
	int noche2;
	int noche3;
	int noche4;
	int tarde1;
	int tarde2;
	int tarde3;
	int tarde4;
	int tarde5;
	int tarde6;
	// Variables
	// Asignacion
	madru1 = 0;
	madru2 = 1;
	madru3 = 2;
	madru4 = 3;
	madru5 = 4;
	madru6 = 5;
	mana1 = 6;
	mana2 = 7;
	mana3 = 8;
	mana4 = 9;
	mana5 = 10;
	mana6 = 11;
	medio1 = 12;
	medio2 = 13;
	tarde1 = 14;
	tarde2 = 15;
	tarde3 = 16;
	tarde4 = 17;
	tarde5 = 18;
	tarde6 = 19;
	noche1 = 20;
	noche2 = 21;
	noche3 = 22;
	noche4 = 23;
	// Datos
	cout << "Ingrese la hora que desee: " << endl;
	cin >> hora;
	// Condiciones
	if (hora==0) {
		cout << "Las " << hora << " Horas pertenecen a la madrugada" << endl;
	}
	if (hora==1) {
		cout << "Las " << hora << " Horas pertenecen a la madrugada" << endl;
	}
	if (hora==2) {
		cout << "Las " << hora << " horas pertenecen a la madrugada" << endl;
	}
	if (hora==3) {
		cout << "Las " << hora << " Horas pertenecen a la madrugada" << endl;
	}
	if (hora==4) {
		cout << "Las " << hora << " Horas pertenecen a la madrugada" << endl;
	}
	if (hora==5) {
		cout << "Las " << hora << " Horas pertenecen a la madrugada" << endl;
	}
	if (hora==6) {
		cout << "Las " << hora << " Horas pertenecen a la mañana" << endl;
	}
	if (hora==7) {
		cout << "Las " << hora << " horas pertenecen a la mañana" << endl;
	}
	if (hora==8) {
		cout << "Las " << hora << " Horas pertenecen a la mañana" << endl;
	}
	if (hora==9) {
		cout << "Las " << hora << " Horas pertenecen a la mañana" << endl;
	}
	if (hora==10) {
		cout << "Las " << hora << " Horas pertenecen a la mañana" << endl;
	}
	if (hora==11) {
		cout << "Las " << hora << " Horas pertenecen a la mañana" << endl;
	}
	if (hora==12) {
		cout << "Las " << hora << " Horas pertenecen al medio dia" << endl;
	}
	if (hora==13) {
		cout << "Las " << hora << " Horas pertenecen al medio dia" << endl;
	}
	if (hora==14) {
		cout << "Las " << hora << " Horas pertenecen a la tarde" << endl;
	}
	if (hora==15) {
		cout << "Las " << hora << " Horas pertenecen a la tarde" << endl;
	}
	if (hora==16) {
		cout << "Las " << hora << " Horas pertenecen a la tarde" << endl;
	}
	if (hora==17) {
		cout << "Las " << hora << " Horas pertenecen a la tarde" << endl;
	}
	if (hora==18) {
		cout << "Las " << hora << " Horas pertenecen a la tarde" << endl;
	}
	if (hora==19) {
		cout << "Las " << hora << " Horas pertenecen a la tarde" << endl;
	}
	if (hora==20) {
		cout << "Las " << hora << " Horas pertenecen a la noche" << endl;
	}
	if (hora==21) {
		cout << "Las " << hora << " Horas pertenecen a la noche" << endl;
	}
	if (hora==22) {
		cout << "Las " << hora << " Horas pertenecen a la noche" << endl;
	}
	if (hora==23) {
		cout << "Las " << hora << " Horas pertenecen a la noche" << endl;
	}
	if (hora<0 || hora>23) {
		// Resultado
		cout << "Tiene que ser una hora entre las 0 y las 23 no cualquier hora" << endl;
	}
	return 0;
}

