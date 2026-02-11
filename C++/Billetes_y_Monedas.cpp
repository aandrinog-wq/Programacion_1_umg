
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	int cant1;
	int cant10;
	int cant100;
	int cant20;
	int cant200;
	int cant5;
	int cant50;
	float cantc01;
	float cantc05;
	float cantc10;
	float cantc25;
	float cantc50;
	float monto;
	cout << "Ingrese el monto en Quetazales: " << endl;
	cin >> monto;
	monto = monto*100;
	monto = float(monto);

	// Billetes
	cant200 = int(monto/20000);
	monto = monto-(cant200*20000);
	cant100 = int(monto/10000);
	monto = monto-(cant100*10000);
	cant50 = int(monto/5000);
	monto = monto-(cant50*5000);
	cant20 = int(monto/2000);
	monto = monto-(cant20*2000);
	cant10 = int(monto/1000);
	monto = monto-(cant10*1000);
	cant5 = int(monto/500);
	monto = monto-(cant5*500);
	cant1 = int(monto/100);
	monto = monto-(cant1*100);

	// Monedas
	cantc50 = int(monto/50);
	monto = monto-(cantc50*50);
	cantc25 = int(monto/25);
	monto = monto-(cantc25*25);
	cantc10 = int(monto/10);
	monto = monto-(cantc10*10);
	cantc05 = int(monto/5);
	monto = monto-(cantc05*5);
	cantc01 = int(monto/1);
	monto = monto-(cantc01*1);
	cout << "Billetes de 200: " << cant200 << endl;
	cout << "Billetes de 100: " << cant100 << endl;
	cout << "Billetes de 50: " << cant50 << endl;
	cout << "Billetes de 20: " << cant20 << endl;
	cout << "Billetes de 10: " << cant10 << endl;
	cout << "Billetes de 5: " << cant5 << endl;
	cout << "Monedas de 1: " << cant1 << endl;
	cout << "Monedas de 50 centavos: " << cantc50 << endl;
	cout << "Monedas de 25 centavos: " << cantc25 << endl;
	cout << "Monedas de 10 centavos: " << cantc10 << endl;
	cout << "Monedas de 5 centavos: " << cantc05 << endl;
	cout << "Monedas de 1 centavos: " << cantc01 << endl;
	return 0;
}

