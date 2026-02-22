#include <iostream>
using namespace std;
int main () {
int n = 0;
int i = 1;
double x = 0;
double numerador = 1.0;
double e = 1.0;
long long factorial = 1;
cout <<"Ingrese la presicion de terminos: " << endl;
cin >> n;

if (n<=0) {
    cout <<"Error. El numero es negativo. " << endl;
}
else {
    cout <<"Ingrese el valor de X para (e^x) : " << endl;
cin >> x;
    while (i<n) {
        factorial = factorial * i;
        numerador = numerador * x;

        e = e + (numerador/factorial);
        i++;
    }
    cout <<"El resultado es: " << e << endl;
}
return 0;

}
