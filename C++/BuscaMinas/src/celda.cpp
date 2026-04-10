#include "Celda.h"
#include <iostream>
using namespace std;

//constructor por defecto
Celda::Celda()
{
}

//constructor parametrizado para inicializar una celda con posicion y estado


Celda::Celda(int coordenadaX, int coordenadaY, bool estadoMina)
{
//coordenadaX posicion del eje X (filas)
    this->coordenadaX = coordenadaX;

//coordenadaY posicion del eje Y (columnas)
    this->coordenadaY = coordenadaY;

//estadoMia define si la celda nace con una mina (true) o no (false)
    this->mina = estadoMina;
    this->minaDescubierta = false;
}

//Metodos de acceso (get y set)
int Celda::setCoordenadaX(int coordenadaX)
{
    this->coordenadaX = coordenadaX;
}
int Celda::getCoordenadaX()
{
    return this->coordenadaX;
}
int Celda::setCoordenadaY(int coordenadaY)
{
    this->coordenadaY = coordenadaY;
}
int Celda::getCoordenadaY()
{
    return this->coordenadaY;
}


//@brief Intenta colocar una mina en la celda
//@param estadoMina El estado que se desea asignar
//@return true si se colocó con éxito, false si la celda ya tenía una mina
bool Celda::setMina(bool estadoMina)
{
    if (this->getMina())
    {
        return false;
    }
    else{
        this->mina = estadoMina;
        return true;
    }
}
bool Celda::getMina()
{
    return this->mina;
}
//Cambia el estado de la celda a descubierta
bool Celda::setMinaDescubierta(bool minaDescubierta)
{
    this->minaDescubierta = minaDescubierta;
}
bool Celda::getMinaDescubierta()
{
    return this->minaDescubierta;
}
//Muestra en consola el estado actual de la celda
void Celda::imprimirCelda()
{
    cout << "Celda en " << this->coordenadaX << ", " << this->coordenadaY << " con mina? " << this->mina << "\n";
}


