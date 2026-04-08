#include "Partido.h"
#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
using namespace std;
#define NUMERO_PARTIDOS 5
#define NUMERO_REGIONES 5
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAXIMA_LONGITUD_CADENA 100
Partido::Partido()
{
}

Partido::~Partido()
{
}

 void Partido::llamaCiclo(){
     float matriz_votos_1[NUMERO_PARTIDOS][NUMERO_REGIONES + 1];
    float matriz_votos_2[NUMERO_PARTIDOS][NUMERO_REGIONES + 1];
    float matriz_votos_3[NUMERO_PARTIDOS][NUMERO_REGIONES+ 1];
    char opcion;
    bool repetir = true;
    float total_votos_1;
    float total_votos_2;
    float total_votos_3;
    char partidos[NUMERO_PARTIDOS][MAXIMA_LONGITUD_CADENA] = {"Partido A","Partido B","Partido C","Partido D","Partido E"};
    do
    {
        system("cls");
        total_votos_1=0;
        total_votos_2=0;
        total_votos_3=0;
        llenarMatriz(matriz_votos_1);
        total_votos_1 = imprimirMatriz(matriz_votos_1, partidos, "Eleccion Presidencial");
        llenarMatriz(matriz_votos_2);
        total_votos_2 = imprimirMatriz(matriz_votos_2, partidos, "Eleccion Diputados");
        llenarMatriz(matriz_votos_3);
        total_votos_3 = imprimirMatriz(matriz_votos_3, partidos, "Eleccion Alcaldes");
        if (total_votos_1 > total_votos_2 && total_votos_1 > total_votos_3)
        {
            cout << "La eleccion con mas participacion fue la presidencial con: "
                 << total_votos_1 << endl;
        }
        else if (total_votos_2 > total_votos_1 && total_votos_2 > total_votos_3)
        {
            cout << "La eleccion con mas participacion fue la de diputados con: "
                 << total_votos_2 << endl;
        }
        else
        {
            cout << "La eleccion con mas participacion fue la de alcaldes con:  "
                 << total_votos_3 << endl;
        }
        cout << "Desea hacer otras elecciones? (s/n)? ";
        cin >> opcion;
        if (opcion == 'n')
        {
            repetir=false;
        }
    } while (repetir);
 }

 int Partido::busquedaAleatorios(int minimo, int maximo){
 return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
 }

 void Partido::llenarMatriz(float matriz[NUMERO_PARTIDOS][NUMERO_REGIONES + 1]){
   int y, x;
    for (y = 0; y < NUMERO_PARTIDOS; y++)
    {
        float suma = 0;
        int calificacion = 0;
        for (x = 0; x < NUMERO_REGIONES; x++)
        {
            if (x == 0 || x == 3)
            {
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 20);
            } else if (x == 1)
            {
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 25);
            } else if (x == 2)
            {
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 35);
            }
            suma += (float)calificacion;
            matriz[y][x] = calificacion;
            calificacion=0;
        }
        matriz[y][NUMERO_REGIONES] = suma;
    }
 }

 void Partido::imprimirMatrizLinea(){
   int x;

    cout << "+--------";
    for (x = 0; x < NUMERO_REGIONES + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
 }

 float Partido::imprimirMatriz(float matriz[NUMERO_PARTIDOS][NUMERO_REGIONES + 1], char partidos[NUMERO_PARTIDOS][MAXIMA_LONGITUD_CADENA], string nombreEleccion){
  int y, x;
    float promedioMayor = matriz[0][NUMERO_REGIONES];
    float promedioMenor = matriz[0][NUMERO_REGIONES];
    float totalGeneral = 0;
    float promedioGeneral = 0;
    char alumnoPromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumnoPromedioMenor[MAXIMA_LONGITUD_CADENA];
    memcpy(alumnoPromedioMayor, partidos[0], MAXIMA_LONGITUD_CADENA);
    memcpy(alumnoPromedioMenor, partidos[0], MAXIMA_LONGITUD_CADENA);
    cout << nombreEleccion << endl;
    cout << "(R1)=>Region 1 (R2)=>Region 2 (R3)=>Region 3 (R4)=>Region 4 (R5)=>Region 5" << endl;
    imprimirMatrizLinea();
    cout << setw(9) << "Partido";
    for (x = 0; x < NUMERO_REGIONES; x++)
    {
        cout << setw(9) << " R" << x + 1;
    }
    cout << setw(8) << " Total" << endl;
    imprimirMatrizLinea();
    for (y = 0; y < NUMERO_PARTIDOS; y++)
    {
        cout << "!" << setw(8) << partidos[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_REGIONES; x++)
        {
            int calificacion = matriz[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = matriz[y][NUMERO_REGIONES];
        totalGeneral += matriz[y][NUMERO_REGIONES];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(alumnoPromedioMayor, partidos[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(alumnoPromedioMenor, partidos[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    promedioGeneral = totalGeneral / NUMERO_PARTIDOS;
    cout << "Partido con mas votos: " << setw(10) << alumnoPromedioMayor <<  setw(10) << promedioMayor << endl;
    cout << "Partido con menos votos: " << setw(10) << alumnoPromedioMenor <<  setw(10) << promedioMenor << endl;
    return promedioGeneral;
 }

