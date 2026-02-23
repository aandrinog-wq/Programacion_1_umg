#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << left << setw(10) << "Decimal"
         << setw(10) << "Octal"
         << setw(15) << "Hexadecimal"
         << "Binario" << endl;

    cout << "---------------------------------------------------" << endl;

    for (int i = 1; i <= 256; i++) {
        cout << left << dec << setw(10) << i
             << oct << setw(10) << i
             << hex << setw(15) << i;
        int temp = i;
        for (int j = 256; j >= 1; j /= 2) {
            if (temp >= j) {
                cout << "1";
                temp -= j;
            } else {
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}
