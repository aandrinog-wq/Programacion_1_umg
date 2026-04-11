#include <iostream>
#include <iomanip>
#include <cmath>>
using namespace std;


double redondearAEntero(double numero);
double redondearADecimas(double numero);
double redondearACentesimas(double numero);
double redondearAMilesimas(double numero);

int main (){

int cantidad;
double valor;
cout <<"Cuantos numeros enteros quiere procesar?: ";
cin >> cantidad;

for (int i = 1; i <=cantidad; i++){
    cout <<"\nIntroduce el valor #" << i << ": ";
    cin >> valor;


    cout << fixed;
    cout << "\nValor original: " << setprecision(6) << valor << endl;

    cout <<"a) Redondeado al entero: " << setprecision(0) << redondearAEntero(valor) << endl;
    cout <<"b) Redondeado a decimas: " << setprecision(1) << redondearADecimas(valor) << endl;
    cout <<"c) Redondeado a centesimas: " << setprecision(2) << redondearACentesimas(valor) << endl;
    cout <<"d) Redondeado a milesimas: " << setprecision(3) << redondearAMilesimas(valor) << endl;

}
return 0;
}


double redondearAEntero(double numero){
return floor(numero + 0.5);
}

double redondearADecimas(double numero){
return floor(numero * 10 + 0.5)/10;
}

double redondearACentesimas(double numero){
return floor(numero * 100 + 0.5)/100;
}

double redondearAMilesimas(double numero){
return floor(numero * 1000 + 0.5)/1000;
}
