#include <iostream>
using namespace std;
int main () {
string nombre;
int edad = 0;
float peso = 0;
float altura = 0;
cout << "Ingrese su Nombre: ";
cin >> nombre;
cout << "Ingrese su Edad: ";
cin >> edad;
cout << "Ingrese su peso en kilogramos: ";
cin >> peso;
cout << "Ingrese su altura en metros: ";
cin >> altura;
double bmi = peso/(altura*altura);
cout << "Estimado " << nombre << " su Edad es de " << edad << " su Peso es " << peso << " Kg" << " su Altura es de " << altura << " m" << endl;
cout << "Su BMI (Indice de Masa Corporal) es de: " << bmi << endl;
if (bmi<18.5) {
    cout <<"Su BMI es bajo" << endl;
}
if (bmi>= 18.5 && bmi <= 24.9) {
    cout <<"Su BMI es normal" << endl;
}
if (bmi>= 25 && bmi<=29.9) {
    cout <<"Su BMI es sobrepeso" << endl;
}
else {
    cout <<"Su BMI es obesidad" << endl;
}
return 0;
}
