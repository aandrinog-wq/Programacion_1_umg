#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 12; i++) {
        cout << "\nEn el ";
        switch (i) {
            case 1:  cout << "primer"; break;
            case 2:  cout << "segundo"; break;
            case 3:  cout << "tercer"; break;
            case 4:  cout << "cuarto"; break;
            case 5:  cout << "quinto"; break;
            case 6:  cout << "sexto"; break;
            case 7:  cout << "septimo"; break;
            case 8:  cout << "octavo"; break;
            case 9:  cout << "noveno"; break;
            case 10: cout << "decimo"; break;
            case 11: cout << "undecimo"; break;
            case 12: cout << "duodecimo"; break;
        }
        cout << " dia de Navidad, mi amor me regalo:" << endl;
        switch (i) {
            case 12: cout << "Doce tamborileros," << endl;
            case 11: cout << "Once flautistas," << endl;
            case 10: cout << "Diez saltarines," << endl;
            case 9:  cout << "Nueve bailarinas," << endl;
            case 8:  cout << "Ocho ordenadoras," << endl;
            case 7:  cout << "Siete cisnecitos," << endl;
            case 6:  cout << "Seis gansitas," << endl;
            case 5:  cout << "Cinco anillos," << endl;
            case 4:  cout << "Cuatro pajaritos," << endl;
            case 3:  cout << "Tres gallinitas," << endl;
            case 2:  cout << "Dos tortolitas," << endl;
            case 1:
                if (i == 1) cout << "Una perdiz en un peral." << endl;
                else cout << "y una perdiz en un peral." << endl;
                break;
        }
    }
    return 0;
}
