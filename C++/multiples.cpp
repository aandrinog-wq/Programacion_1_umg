#include <iostream>
using namespace std;

bool esMultiple(int a, int b);
int main() {
int a;
int b;
cout <<"Ingrese el primer numero: ";
cin >> a;
cout <<"Ingrese el segundo numero: ";
cin >> b;

if (esMultiple(a, b)){
    cout << b << " es multiplo de: " << a << endl;
}
else {
    cout << b << " no es multiplo de: " << a << endl;
}

cout <<"El resultado es: " << esMultiple(a, b) << endl;
return 0;
}

bool esMultiple(int a, int b){
int resultado = b % a;
if(b % a == 0){
    return true;
}
else {
    return false;
 }
}
