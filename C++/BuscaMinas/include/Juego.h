#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"

//esta clase funciona como el controlador principal que orquesta la logica las reglas de victoria/derrota y la interaccion con el usuario
class Juego
{
private:

    //instancia del tablero y contador de minas configuradas
	Tablero tablero;
	int cantidadMinas;

	//metodos auxiliares para la generacion de posicion al azar
	int aleatorio_en_rango(int minimo, int maximo);
	int filaAleatoria();
	int columnaAleatoria();
public:

    //constructor de la clase juego
    //tablero objeto de tipo tablero previamente inicializado
    //cantidadMinas numero de minas que se colocaron en el futuro
    Juego(Tablero tablero, int cantidadMinas);

    //metodo para distribuir las minas en el tablero al iniciar
	void colocarMinasAleatoriamente();

	//metodos para obtener la entrada del jugador desde la consola
	int solicitarFilaUsuario();
	int solicitarColumnaUsuario();

	//metodo que verifica si se han cumplido las condiciones de victoria
	bool jugadorGana();

	//metodo principal que contiene el bucle de juego
	void iniciar();

	//carga y muestra una imagen o diseño ASCII desde un archivo
	// nombreArchivo ruta o nombre del archivo de texto con la portada
	void dibujarPortada(string nombreArchivo);
};

#endif // JUEGO_H
