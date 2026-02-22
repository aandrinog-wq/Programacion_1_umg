#include <iostream>
using namespace std;
int main () {
int fila = 1;

while (fila <=8){
    if (fila % 2 == 0){
    cout << ' ' ;
}
int columna = 1;
while (columna <= 8){
    cout <<"* ";
    columna++;
}
cout << endl;
fila++;

}
}
