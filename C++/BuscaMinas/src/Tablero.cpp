#include "Tablero.h"
#include <sstream>
#include <iostream>

using namespace std;

//gestiona la creacion de la matriz de celdas, el calculo de minas cercanas y el dibuujo estetico del tablero en el terminal
Tablero::Tablero()
{
}

//constructor parametrizado, crea una matriz de objetos celda
//alturaTablero filas totales
//anchoTablero columnas totales
//modoDesarrollador estado de visibilidad de minas
Tablero::Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador)
{
    this->alturaTablero = alturaTablero;
    this->anchoTablero = anchoTablero;
    this->modoDesarrollador = modoDesarrollador;
    int x, y;

    //bucle para llenar la matriz de vectores con objetos de tipo celda
    for (y=0; y < this->alturaTablero; y++)
    {
        vector<Celda> fila;
        for (x=0; x < this->anchoTablero; x++)
        {
            fila.push_back((Celda(x, y, false)));
        }
        this->contenidoTablero.push_back(fila);
    }
}

//getters y setters de las dimensiones del tablero
int Tablero::getAlturaTablero()
{
    return this->alturaTablero;
}
int Tablero::setAlturaTablero(int alturaTablero)
{
    this->alturaTablero = alturaTablero;
}
int Tablero::getAnchoTablero()
{
    return this->anchoTablero;
}
int Tablero::setAnchoTablero(int anchoTablero)
{
    this->anchoTablero = anchoTablero;
}
bool Tablero::getModoDesarrollador()
{
    return this->modoDesarrollador;
}
bool Tablero::setModoDesarrollador(bool modoDesarrollador)
{
    this->modoDesarrollador = modoDesarrollador;
}

//decide que caracter mostrar en cada posicion del tablero
string Tablero::getRepresentacionMina(int coordenadaX, int coordenadaY)
{
    Celda celdaTemporal = this->contenidoTablero.at(coordenadaY).at(coordenadaX);
    if (celdaTemporal.getMinaDescubierta() || this->modoDesarrollador)
    {
        if (celdaTemporal.getMina())
        {
            return "*";
        }
        else
        {
            int cantidadCelda=this->minasCercanas(coordenadaY,coordenadaX);
            string cantidadCeldaString = " ";
            stringstream ss;
            ss << cantidadCelda;
            ss >> cantidadCeldaString;
            return cantidadCeldaString;
        }
    }
    else
    {
        return "?";
        //return ".";
    }
}

//algoritmo que revisa el perimetro de una celda para contar minas adyacentes
//maneja los limites del tablero para no intentar acceder a indicios inexistentes
int Tablero::minasCercanas(int filaTablero, int columnaTablero)
{
        int contadorTablero = 0;
        int filaInicioTablero, filaFinTablero, columnaInicioTablero, columnaFinTablero;

        //validacion de limites para no salir de la matriz
        if (filaTablero <= 0)
		{
			filaInicioTablero = 0;
		}
		else
		{
			filaInicioTablero = filaTablero - 1;
		}

		if (filaTablero + 1 >= this->alturaTablero)
		{
			filaFinTablero = this->alturaTablero - 1;
		}
		else
		{
			filaFinTablero = filaTablero + 1;
		}

		if (columnaTablero <= 0)
		{
			columnaInicioTablero = 0;
		}
		else
		{
			columnaInicioTablero = columnaTablero - 1;
		}
		if (columnaTablero + 1 >= this->anchoTablero)
		{
			columnaFinTablero = this->anchoTablero - 1;
		}
		else
		{
			columnaFinTablero = columnaTablero + 1;
		}

		//recorrido de la sub-matriz de 3 * 3 alrededor de la celda elegida
		int m;
		for (m = filaInicioTablero; m <= filaFinTablero; m++)
		{
			int l;
			for (l = columnaInicioTablero; l <= columnaFinTablero; l++)
			{
				if (this->contenidoTablero.at(m).at(l).getMina())
				{
					contadorTablero++;
				}
			}
		}
		return contadorTablero;
}

//metodos auxiliares de impresion
void Tablero::imprimirSeparadorEncabezado()
	{
		int m;
		for (m = 0; m <= this->anchoTablero; m++)
		{
			cout << "----";
			if (m + 2 == this->anchoTablero)
			{
				cout << "-";
			}
		}
		cout << "\n";
	}

	void Tablero::imprimirSeparadorFilas()
	{
		int m;
		for (m = 0; m <= this->anchoTablero; m++)
		{
			if (m <= 1)
			{
				cout << "|---";
			}
			else
			{
				cout << "+---";
			}
			if (m == this->anchoTablero)
			{
				cout << "+";
			}
		}
		cout << "\n";
	}

	void Tablero::imprimirEncabezado()
	{
		this->imprimirSeparadorEncabezado();
		cout << "|   ";
		int l;
		for (l = 0; l < this->anchoTablero; l++)
		{
			cout << "| " << l + 1 << " ";
			if (l + 1 == this->anchoTablero)
			{
				cout << "|";
			}
		}
		cout << "\n";
	}

	//dubuja el estado actual del juego integrando indices y celdas
	void Tablero::imprimir()
	{
		this->imprimirEncabezado();
		this->imprimirSeparadorEncabezado();
		int x, y;
		for (y = 0; y < this->alturaTablero; y++)
		{
			cout << "| " << y + 1 << " ";
			for (x = 0; x < this->anchoTablero; x++)
			{
				cout << "| " << this->getRepresentacionMina(x, y) << " ";
				if (x + 1 == this->anchoTablero)
				{
					cout << "|";
				}
			}
			cout << "\n";
			this->imprimirSeparadorFilas();
		}
	}

	//delega la colocacion de la mina a un objeto celda especifico
    bool Tablero::colocarMina(int x, int y)
	{
		return this->contenidoTablero.at(y).at(x).setMina(true);
	}

	//cambia el estado de una celda a descubierta
	//false si el usuario toco una mina
    bool Tablero::descubrirMina(int x, int y)
	{
		this->contenidoTablero.at(y).at(x).setMinaDescubierta(true);
		Celda celda = this->contenidoTablero.at(y).at(x);
		if (celda.getMina())
		{
			return false;
		}
		return true;
	}

	//cuenta cuantas seguras quedan para determinar la victoria
	int Tablero::contarCeldasSinMinasYSinDescubrir()
	{
		int x, y, contador = 0;
		for (y = 0; y < this->alturaTablero; y++)
		{
			for (x = 0; x < this->anchoTablero; x++)
			{
				Celda celdaTemporal = this->contenidoTablero.at(y).at(x);
				if (!celdaTemporal.getMinaDescubierta() && !celdaTemporal.getMina())
				{
					contador++;
				}
			}
		}
		return contador;
	}
