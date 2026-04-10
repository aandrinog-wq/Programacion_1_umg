#include <iostream>
#include <unistd.h>
#include "Juego.h"
#include "Config.h"

using namespace std;

int main()
{
//Configuracion inicial predeterminada
    const int FILASTABLERO = 5;
    const int COLUMNASTABLERO = 5;
    const int MINASENTABLERO = 3;
    const bool MODODESARROLLADOR = true; //Permite ver las minas para pruebas
    const int VIDASTABLERO = 3;

//Inicializacion del objeto de configuracion con los valores constantes
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);

//Creacion de una instancia de juego inicial
   Juego juego(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());

//Semilla para la generacion de numeros aleatorios usando el ID del proceso
    srand(getpid());

    int opciones;
    bool repetir = true;

//Bucle inicial del menu
    do
    {
        system("cls");
        cout << "\n\n\t\tBUSCA MINAS -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Configuracion del Juego" << endl;
        cout << "\t\t2. Iniciar el Juego" << endl;
        cout << "\t\t3. Salir del Juego" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
            //Acceso al submenu para modificar dimensiones o dificultad
            {
                configuracionJuego.menuConfiguracion();
                break;
            }
        case 2:
            //Creacion de una partida nueva con los ajustes actuales de configuracion
            {
              	Juego juegoTemporal(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
                juegoTemporal.iniciar();

                system("pause");
                break;
            }
            //Finaliza el bucle y cierra el programa
        case 3: repetir = false;
                break;
        }
    } while (repetir);
    system("cls");
    return 0;
}
