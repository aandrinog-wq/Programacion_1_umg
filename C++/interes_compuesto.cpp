#include <iostream>
#include <iomanip>
#include <cmath> // biblioteca de matemáticas estándar
using namespace std;

int main()
{
    long long principal = 100000;
    long long monto = principal;
    double tasa = .05;

    cout << "Anio" << setw( 21 ) << "Monto en deposito" << endl;
    for ( unsigned int anio = 1; anio <= 10; ++anio )
    {
        monto = (monto * 105)/100;
        long long dolares = monto/100;
        long long centavos = monto%100;

        cout << setw( 4 ) << anio << setw( 18 ) << dolares << ".";
        if (centavos < 10)  cout <<"0";

        cout << centavos << endl;
    }
    return 0;
}
