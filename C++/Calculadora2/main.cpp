#include <iostream>
#include "Calculadora.h"
using namespace std;
int main()
{
  Calculadora Calc1;
  char ok = 's';
  float Resultado = 0;
  int num1;
  int num2;
  while (ok == 's') {
  cout <<"Ingresa el primer valor: " << endl;
  cin >> num1;
  cout <<"Ingresa el segundo valor: " << endl;
  cin >> num2;
  cout <<"HORA DE OPERAR :)" << endl;
  Resultado = Calc1.suma(num1, num2);
  cout <<"El resultado de la suma es: " << Resultado << endl;
  Resultado = Calc1.resta(num1, num2);
  cout <<"El resultado de la resta es: " << Resultado << endl;
  Resultado = Calc1.multiplicacion(num1, num2);
  cout <<"El resultado de la multiplicacion es: " << Resultado << endl;
  Resultado = Calc1.division(num1, num2);
  cout <<"El resultado de la division es: " << Resultado << endl;
  cout <<"Quiere volver a operar (s/n)?" << endl;
  cin >> ok;

}
}
