#ifndef PARTIDO_H
#define PARTIDO_H

#include <iostream>
#include <string>
using namespace std;
class Partido
{
    public:
        Partido();
        virtual ~Partido();

        void llamaCiclo();
        int busquedaAleatorios(int minimo, int maximo);
        void llenarMatriz(float matriz[5][6]);
        void imprimirMatrizLinea();
        float imprimirMatriz(float matriz[5][6], char partidos[5][100], string nombreEleccion);
};

#endif
