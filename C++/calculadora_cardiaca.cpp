#include <iostream>
#include <string>
using namespace std;

class FrecuenciasCardiacas {

private:
    string nombre;
    string apellido;
    int mes;
    int dia;
    int anio;

public:

    FrecuenciasCardiacas(string nom, string ape, int m, int d, int a);

    void establecerNombre(string nom);
    void establecerApellido(string ape);
    void establecerMes(int m);
    void establecerDia(int d);
    void establecerAnio(int a);

    string obtenerNombre();
    string obtenerApellido();
    int obtenerMes();
    int obtenerDia();
    int obtenerAnio();

    int obtenerEdad();
    int obtenerFrecuenciaCardiacaMaxima();
    void obtenerFrecuenciaCardiacaEsperada();
};

FrecuenciasCardiacas::FrecuenciasCardiacas(string nom, string ape, int m, int d, int a)
{
    nombre = nom;
    apellido = ape;
    mes = m;
    dia = d;
    anio = a;
}

void FrecuenciasCardiacas::establecerNombre(string nom)
{
    nombre = nom;
}
void FrecuenciasCardiacas::establecerApellido(string ape)
{
    apellido = ape;
}
void FrecuenciasCardiacas::establecerMes(int m)
{
    mes = m;
}
void FrecuenciasCardiacas::establecerDia(int d)
{
    dia = d;
}
void FrecuenciasCardiacas::establecerAnio(int a)
{
    anio = a;
}

string FrecuenciasCardiacas::obtenerNombre()
{
    return nombre;
}
string FrecuenciasCardiacas::obtenerApellido()
{
    return apellido;
}
int FrecuenciasCardiacas::obtenerMes()
{
    return mes;
}
int FrecuenciasCardiacas::obtenerDia()
{
    return dia;
}
int FrecuenciasCardiacas::obtenerAnio()
{
    return anio;
}


int FrecuenciasCardiacas::obtenerEdad()
{
    int mesActual, diaActual, anioActual;
    cout <<"Ingrese el dia actual: " << endl;
    cin >> diaActual;
    cout <<"Ingrese el mes actual: " << endl;
    cin >> mesActual;
    cout <<"Ingrese el anio actual: " << endl;
    cin >> anioActual;

    int edad = anioActual - anio;

    return edad;
}

int FrecuenciasCardiacas::obtenerFrecuenciaCardiacaMaxima()
{
    int edad = obtenerEdad();
    return 220 - edad;
}

void FrecuenciasCardiacas::obtenerFrecuenciaCardiacaEsperada()
{
    int max = obtenerFrecuenciaCardiacaMaxima();
    cout <<"Frecuencia cardiaca esperada minima: " << max * 0.50 << endl;
    cout <<"Frecuencia cardiaca esperada maxima: " << max * 0.85 << endl;
}
int main ()
{
    string nombre, apellido;
    int mes, dia, anio;
    cout <<"Ingrese un nombre: ";
    cin >> nombre;
    cout <<"Ingrese un apellido: ";
    cin >> apellido;
    cout <<"Ingrese el dia de nacimiento: ";
    cin >> dia;
    cout <<"Ingrese el mes de nacimiento: ";
    cin >> mes;
    cout <<"Ingrese el anio de nacimiento: ";
    cin >> anio;
    FrecuenciasCardiacas persona(nombre, apellido, mes, dia, anio);

    cout <<"Nombre: " << persona.obtenerNombre() << endl;
    cout <<"Apellido: " << persona.obtenerApellido() << endl;

    int edad = persona.obtenerEdad();
    cout <<"Edad: " << edad << endl;

    cout << "Frecuencia cardiaca maxima: " << 220 - edad << endl;

    double minimo = 201 * 0.50;
double maximo = 201 * 0.85;

cout << "Frecuencia cardiaca esperada minima: " << minimo << endl;
cout << "Frecuencia cardiaca esperada maxima: " << maximo << endl;

}
