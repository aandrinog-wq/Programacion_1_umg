#include <iostream>
using namespace std;
float CalcularPromedio(float totalGeneral, int numeroVeces);
int main() {
    float totalGeneral = 100 + 200;
    int numeroVeces = 10;
    cout << "Promedio general: "
         << CalcularPromedio(totalGeneral, numeroVeces)
         << endl;
    return 0;
}
float CalcularPromedio(float totalGeneral, int numeroVeces) {
    return totalGeneral / numeroVeces;
}
