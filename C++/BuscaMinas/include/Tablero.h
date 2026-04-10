#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
#include <vector>
#include "Celda.h"

using namespace std;

//esta clase gestiona la matriz de objetos Celda, controlando la representacion visual del juego y las reglas de interaccion con las casillas
class Tablero
{
    public:

        //constructor por defecto
        Tablero();

        //constructor parametrizado para inicializar las dimensiones y el modo
        //alturaTablero numero de filas
        //anchoTablero numero de columnas
        //modoDesarrollador define si se muestran las minas ocultas
        Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador);

        //metodos de acceso para la altura dle tablero
        int getAlturaTablero();
        int setAlturaTablero(int alturaTablero);

        //metodos de acceso para el ancho del tablero
        int getAnchoTablero();
        int setAnchoTablero(int anchoTablero);

        //metodos para gestionar el estado del modo desarrollador
        bool getModoDesarrollador();
        bool setModoDesarrollador(bool modoDesarrollador);

        //metodos de formato visual para la impresion en consola
        void imprimirSeparadorEncabezado();
        void imprimirSeparadorFilas();
        void imprimirEncabezado();

        //dibuja el tablero completo en la pantalla
        void imprimir();

        //coloca una mina en una coordenada especifica
        //true si se coloco, false si ya existia una mina
        bool colocarMina(int x, int y);

        //procesa la eleccion del jugador al intentar descubrir una celda
        bool descubrirMina(int x, int y);

        //evalua cuantas celdas seguras quedan por revelar
        //cantidad de celdas sin mina que aun estan ocultas
        int contarCeldasSinMinasYSinDescubrir();

    protected:

    private:

        //atributos de dimension y estado
        int alturaTablero, anchoTablero;
        bool modoDesarrollador;

        //matriz dinamica que contiene todos los objetos celda del juego
        vector<vector<Celda> > contenidoTablero;

        //determina que caracter mostrar segun el estado de la celda
        string getRepresentacionMina(int x, int y);

        //calcula la cantidad de minas en las 8 celdas adyacentes
        int minasCercanas(int fila, int columna);
};

#endif // TABLERO_H
