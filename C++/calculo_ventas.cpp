#include <iostream>
using namespace std;
int main () {
double primero = 2.98;
double segundo = 4.50;
double tercero = 9.98;
double cuarto = 4.49;
double quinto = 6.87;
double total = 0;
int opcion;
int cantidad;
string continuar = "S";
while (continuar == "S"){
cout <<"-----Menu Opciones-----" << endl;
cout <<"1. Primero Producto = $2.98 " << endl;
cout <<"2. Segundo Producto = $4.50 " << endl;
cout <<"3. Tercer Producto = $9.98 " << endl;
cout <<"4. Cuarto Producto = $4.49 " << endl;
cout <<"5. Quinto Prodcuto = $6.87 " << endl;
cout <<"Que Producto desea? Ingrese su numero: " << endl;
cin >> opcion;
cout <<"Ingrese la cantidad: " << endl;
cin >> cantidad;

switch(opcion){
case 1:
    cout <<"Eligio el Primero producto. " << endl;
    total = total + (primero * cantidad);
    break;
case 2:
    cout <<"Eligio el Segundo producto. " << endl;
    total = total + (segundo * cantidad);
    break;
case 3:
    cout <<"Eligio el Tercer producto. " << endl;
    total = total + (tercero * cantidad);
    break;
case 4:
    cout <<"Eligio el Cuarto producto. " << endl;
    total = total + (cuarto * cantidad);
    break;
case 5:
    cout <<"Eligio el Quinto producto. " << endl;
    total = total + (quinto * cantidad);
    break;
default:
    cout <<"Opcion invalida." << endl;
    break;
}
cout <<"Desea Finalizar? (presione S si desea agregar otro producto o presione N para finalizar)" << endl;
cin >> continuar;
}
cout <<"Su total es de: " << total << endl;
return 0;
}
