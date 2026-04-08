#include <iostream>
#include "Calculadora.h"
using namespace std;
int main()
{
  Calculadora Calc1;
  float Resultado = 0.00;
  Resultado = Calc1.suma(20, 30);
  cout <<"El resultado de la suma es: " << Resultado << endl;
  Resultado = Calc1.resta(20, 30);
  cout <<"El resultado de la resta es: " << Resultado << endl;
  Resultado = Calc1.multiplicacion(20, 30);
  cout <<"El resultado de la multiplicacion es: " << Resultado << endl;
  Resultado = Calc1.division(20, 30);
  cout <<"El resultado de la division es: " << Resultado << endl;
  return 0;
}
