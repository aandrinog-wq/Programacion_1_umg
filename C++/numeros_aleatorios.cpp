#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

int n;
srand(static_cast<unsigned int>(time(0)));

n = 1 + rand() % 2;
cout <<"a) 1 <= n <= 2:   n = " << n << endl;

n = 1 + rand() % 100;
cout <<"b) 1 <= n <= 100:   n = " << n << endl;

n = rand() % 10;
cout <<"c) 0 <= n <= 9:   n = " << n << endl;

n = 1000 + rand() % 113;
cout <<"d) 1000 <= n <= 1112:   n = " << n << endl;

n = -1 + rand() % 3;
cout <<"e) -1 <= n <= 1:   n = " << n << endl;

n = -3 + rand() % 15;
cout <<"f) -3 <= n <= 11:   n = " << n << endl;



return 0;
}
