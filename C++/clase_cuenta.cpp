#include <iostream>
using namespace std;

class Cuenta {
private:
    int saldo;

public:
    Cuenta(int saldoInicial);
    void abonar(int monto);
    void cargar(int monto);
    int obtenerSaldo();
};
Cuenta::Cuenta(int saldoInicial)
{
    if (saldoInicial >= 0){
        saldo = saldoInicial;
    }
    else{
        saldo = 0;
        cout <<"ERROR. Saldo inicial invalido" << endl;
    }

}
int Cuenta::obtenerSaldo() {
  return saldo;
}

void Cuenta::abonar(int monto){
   saldo = saldo + monto;
}

void Cuenta::cargar(int monto) {

    if (saldo>monto) {
    cout <<"Tiene saldo insuficiente" << endl;
  }
  else {
       saldo = saldo - monto;

  }
}
int main() {

    Cuenta cuenta1(100);
    Cuenta cuenta2(-50);

    cout << "Saldo cuenta1: " << cuenta1.obtenerSaldo() << endl;
    cout << "Saldo cuenta2: " << cuenta2.obtenerSaldo() << endl;

    cout << endl;

    cuenta1.abonar(50);
    cout <<"Cuenta1 despues de abonarle 50: " << cuenta1.obtenerSaldo() << endl;

    cuenta1.cargar(30);
    cout <<"Cuenta1 despues de cargar 30: " << cuenta1.obtenerSaldo() << endl;

    cuenta1.cargar(200);
 }
