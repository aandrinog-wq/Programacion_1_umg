#include <iostream>
using namespace std;
int obtenerCosiente(int a, int b);
int obtenerResiduo(int a, int b);
int separarDigitos(int n);

int main() {
int lapiz;
cout << "Ingrese un numero entero entre 1 a 32767: " << endl;
cin >> lapiz;
if (lapiz > 32767){
    cout << "El numero es superior a 32767" << endl;
    cout <<"Intente de nuevo: " << endl;
    cin >> lapiz;
}
else if(lapiz <= 0){
    cout <<"El numero es menor a 1" << endl;
    cout <<"Intente de nuevo: " << endl;
    cin >> lapiz;
}
else{

if(lapiz >= 10000){
cout << obtenerCosiente(lapiz, 10000) << "  ";
lapiz = obtenerResiduo(lapiz, 10000);
}
if(lapiz >= 1000){
cout << obtenerCosiente(lapiz, 1000) << "  ";
lapiz = obtenerResiduo(lapiz, 1000);
}
if(lapiz >= 100){
cout << obtenerCosiente(lapiz, 100) << "  ";
lapiz = obtenerResiduo(lapiz, 100);
}
if(lapiz >= 10){
cout << obtenerCosiente(lapiz, 10) << "  ";
lapiz = obtenerResiduo(lapiz, 10);
}
}
cout << lapiz << endl;
return 0;
}



int obtenerCosiente(int a, int b){
        return a / b;
        }


int obtenerResiduo(int a, int b){
        return a % b;
        }
