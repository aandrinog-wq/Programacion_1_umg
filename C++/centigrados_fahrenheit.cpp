#include <iostream>
#include <iomanip>

using namespace std;
int fahrenheit(int celsius);
int centigrados(int fahrenheit);

int main() {
    cout << "Centigrados\tFahrenheit" << endl;
    for (int i = 0; i <= 100; i++) {
        cout << i << "\t\t" << fahrenheit(i) << endl;
    }

    cout << "\n\n";
    cout << "Fahrenheit\tCentigrados" << endl;
    for (int i = 32; i <= 212; i++) {
        cout << i << "\t\t" << centigrados(i) << endl;
    }

    return 0;
}

int fahrenheit(int celsius) {
   return (celsius * 9 / 5) + 32;
}

int centigrados(int fahrenheit) {

return (fahrenheit - 32) * 5 / 9;
}
