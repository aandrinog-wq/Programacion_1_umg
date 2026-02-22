#include <iostream>
using namespace std;
int main () {
int horas = 0;
int horas_extra = 0;
float tarifa_hora =0;
float sueldo_bruto = 0;

cout <<"Introduzca las horas trabajadas (o -1 para salir): " <<endl;
cin >> horas;

while (horas !=-1) {
cout <<"Introduzca la tarifa por hora del empleado (Q0.00): " << endl;
cin >> tarifa_hora;

if (horas <= 40) {
    sueldo_bruto = horas * tarifa_hora;
}
else {
    sueldo_bruto = (40 * tarifa_hora) + ((horas - 40 )* (tarifa_hora * 1.5));
}
cout <<"El salario es: " << sueldo_bruto << endl;

cout <<"Introduzca las horas trabajadas (o -1 para salir): " <<endl;
cin >> horas;

}
return 0;

}
