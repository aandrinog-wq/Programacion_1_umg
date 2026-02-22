#include <iostream>
using namespace std;
int main () {
double a = 0;
double b = 0;
double c = 0;

cout <<"Ingrese el valor del lado A: " << endl;
cin >> a;
cout <<"Ingrese el valor del lado B: " << endl;
cin >> b;
cout <<"Ingrese el valor del lado C: " <<endl;
cin >> c;
if ((a + b > c ) && (a + c > b) && (b + c > a)){
    cout <<"Si se pueden representar los lados del triangulo" << endl;
}
else {
    cout <<"No pueden representar el triangulo" <<endl;
}
return 0;
}
