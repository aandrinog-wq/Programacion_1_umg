#include <iostream>
using namespace std;

void cuadrado(int lado);
int main(){

int l;
cin >> l;
cuadrado(l);
return 0;
}

void cuadrado(int lado){
for(int i = 1; i<=lado; i++){
    for (int j = 1; j<=lado; j++){
        cout << "*";
    }
    cout << endl;
}

}
