#include <iostream>
using namespace std;
int main () {
long long n = 0;
long long total = 1;
cout <<"Ingrese el valor de N (No numeros negativos): " << endl;
cin >> n;
long long original_n = n;
while (n>1) {
    total = total * n;
    n--;
}
if (original_n<0) {
    cout <<"No se puede hacer factorial con numeros negativos" << endl;
}
else {
cout <<"El resultado es: " << total << endl;
}
return 0;
}
