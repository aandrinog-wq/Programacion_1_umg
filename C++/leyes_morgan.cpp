#include <iostream>
using namespace std;
int main () {
int x = 6;
int y = 5;
int a = 2;
int b = 2;
int g = 2;
int i = 3;
int j = 7;
cout << boolalpha;
bool original_a = !(x < 5) && !(y >= 7);
bool nueva_a = !((x < 5) || (y >= 7));
bool original_b = !(a == b) || !(g != 5);
bool nueva_b = !((a == b) && (g != 5));
bool original_c = !((x <= 8) && (y > 4));
bool nueva_c = !(x <= 8) || !(y > 4);
bool original_d = !((i > 4) || (j <= 6));
bool nueva_d = !(i > 4) && !(j <= 6);
cout <<"Inicio a) son iguales? " << (original_a == nueva_a) << endl;
cout <<"Valor original: " <<original_a << "| valor nuevo: " << nueva_a << endl;
cout <<"Inicio b) son iguales? " << (original_b == nueva_b) << endl;
cout <<"Valor original: " <<original_b << "| valor nuevo: " << nueva_b << endl;
cout <<"Inicio c) son iguales? " << (original_c == nueva_c) << endl;
cout <<"Valor original: " <<original_c << "| valor nuevo: " << nueva_c << endl;
cout <<"Inicio d) son iguales? " << (original_d == nueva_d) << endl;
cout <<"Valor original: " <<original_d << "| valor nuevo: " << nueva_d << endl;
return 0;
}
