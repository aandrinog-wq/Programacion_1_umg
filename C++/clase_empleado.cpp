#include <iostream>
#include <string>
using namespace std;
class Empleado {

private:
    string nombre;
    string apellido;
    int salarioMensual;

public:
    Empleado(string nom, string ape, int salario);

    void establecerNombre(string nom);
    string obtenerNombre();

    void establecerApellido(string ape);
    string obtenerApellido();

    void establecerSalario(int salario);
    int obtenerSalario();

};

Empleado::Empleado(string nom, string ape, int salario)
{
    nombre = nom;
    apellido = ape;

    if (salario > 0)
    salarioMensual = salario;
    else
        salarioMensual = 0;
}

void Empleado::establecerNombre(string nom)
{
    nombre = nom;
}

void Empleado::establecerApellido(string ape)
{
    apellido = ape;
}

void Empleado::establecerSalario(int salario)
{
    if (salario > 0)
        salarioMensual = salario;
    else
        salarioMensual = 0;
}

string Empleado::obtenerNombre()
{

    return nombre;
}

string Empleado::obtenerApellido()
{
    return apellido;
}

int Empleado::obtenerSalario()
{
    return salarioMensual;
}

int main ()
{
    Empleado emp1("Juan", "Perez", 2000);
    Empleado emp2("Ana", "Lopez", 3000);

    cout <<emp1.obtenerNombre() << " " << emp1.obtenerApellido() << endl;
    cout <<"Salario anual: " << emp1.obtenerSalario() * 12<< endl;

    cout << endl;

    cout << emp2.obtenerNombre() << " " << emp2.obtenerApellido() << endl;
    cout <<"Salario anual: " << emp2.obtenerSalario() * 12 << endl;

    cout << endl;
    emp1.establecerSalario(emp1.obtenerSalario() * 1.10);
    emp2.establecerSalario(emp2.obtenerSalario() * 1.10);


    cout <<"Despues del aumento del 10%" << endl;


    cout << emp1.obtenerNombre() << "Salario anual: "
         << emp1.obtenerSalario() * 12 << endl;


    cout <<emp2.obtenerNombre() << "Salario anual: "
         <<emp2.obtenerSalario() * 12 << endl;
}
