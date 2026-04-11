#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calcularCargos(double horas);
int main () {
double horas1;
double horas2;
double horas3;
cout <<"Introduzca la hora del automovil 1: ";
cin >> horas1;
cout <<"Introduzca la hora del automovil 2: ";
cin >> horas2;
cout <<"Introduzca la hora del automovil 3: ";
cin >> horas3;

double cargo1 = calcularCargos(horas1);
double cargo2 = calcularCargos(horas2);
double cargo3 = calcularCargos(horas3);

double totalHoras = horas1 + horas2 + horas3;
double totalCargos = cargo1 + cargo2 + cargo3;

    cout << "\n" << left << setw(12) << "Automovil"
         << right << setw(10) << "Horas"
         << right << setw(12) << "Cargo" << endl;

cout << fixed << setprecision(2);

cout << left << setw(12) << "1" << right << setw(10) << horas1 << right << setw(12) << cargo1 << endl;
cout << left << setw(12) << "2" << right << setw(10) << horas2 << right << setw(12) << cargo2 << endl;
cout << left << setw(12) << "1" << right << setw(10) << horas3 << right << setw(12) << cargo3 << endl;

cout << left << setw(12) << "Total" << right << setw(10) << totalHoras << right << setw(12) << totalCargos << endl;

return 0;
}

double calcularCargos(double horas) {
double cargo = 2.00;

if (horas > 3.0) {
    cargo += ceil(horas - 3.0) * 0.50;
}


if (cargo > 10.00){
    cargo = 10.00;
}
return cargo;
}
