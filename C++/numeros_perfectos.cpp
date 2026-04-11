#include <iostream>
using namespace std;

int esPerfecto(int numero);
int main() {

for(int i=1; i<=1000; i++){
    if(esPerfecto(i)){
    cout << i << " es Perfecto. Divisores: ";
    for (int k = 1; k < i; k++){
        if(i % k == 0){
            cout << k << " ";
        }
    }
    cout << endl;
    }
}
return 0;
}

int esPerfecto(int numero){
int suma = 0;
for(int j = 1; j < numero; j++){
    if(numero % j == 0){
        suma += j;
    }
}

if(suma == numero){
    return 1;
}
else {
    return 0;
}
}
