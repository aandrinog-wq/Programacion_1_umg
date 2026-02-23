#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
    double principal = 1000.0;
    double meta = 2500.0;
    cout << setw(10) << "Tasa (%)" << setw(20) << "Meses encesarios" << endl;
    for(int tasaInt = 2; tasaInt <= 5; tasaInt++) {
        double tasa = tasaInt/100.0;
        int mes = 1;
        double monto = 0;
while(monto < meta) {
    monto = principal * pow(1.0 + tasa, mes);
    if (monto >= meta) {
        cout << setw(10) << tasaInt << "%" << setw(20) << mes << endl;
        break;
    }
    mes++;
}
    }
return 0;
}
