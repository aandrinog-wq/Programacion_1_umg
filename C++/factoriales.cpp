#include <iostream>
using namespace std;
int main () {
unsigned long long cantidad = 5;
unsigned long long factorial = 1;

for (int i = 1; i <= cantidad; i++){
   factorial = factorial * i;

   cout << i << "\t" << factorial << endl;
}
return 0;
}
