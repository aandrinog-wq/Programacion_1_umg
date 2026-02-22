#include <iostream>
using namespace std;
int main () {

int aprobados = 0;
int reprobados = 0;
int contador_estudiantes = 1;
int resultado = 0;

while (contador_estudiantes <= 10) {

    cout <<"Escriba el resultado (1 = aprobado, 2 = reprobado): " << endl;
    cin >> resultado;

    while (resultado !=1 && resultado !=2) {
        cout <<"Tiene que ser un numero entre 1 y 2. Intenta de nuevo. " << endl;
        cin >> resultado;
    }

    if (resultado == 1)
        aprobados = aprobados + 1;
    else
        reprobados = reprobados + 1;

    contador_estudiantes = contador_estudiantes + 1;
}

cout << "Aprobados" << aprobados << "\nReprobados " << reprobados << endl;

if (aprobados > 8)
    cout << "Bono para el instructor" << endl;
}
