#include <iostream>
using namespace std;
int main () {
int n = 0;
long long factorial = 1;
double e = 1.0;
int i = 1;
cout <<"Ingrese la presicion de terminos: " << endl;
cin >> n;
if (n<=0) {
    cout <<"Error. Ingreso un numero negativos." << endl;
}
else {
while (i < n) {
    factorial = factorial * i;
    e = e + (+1.0/factorial);
    i++;
}

    cout <<"El resultado es: " << e << endl;

}
return 0;
}
