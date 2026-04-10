#ifndef CELDA_H
#define CELDA_H
//Libreria que guarda los atributos y los prototipos de los metodos utilizados para crear y administrar las celdas de juego

class Celda
{
    public:
    //constructor por defecto de la clase celda
        Celda();

    //constructor parametrizado
    //coordenadaX posicion en el eje X
    //coordenadaY posicion en el eje Y
    //estadoMina define si la celda contiene una mina inicialmente
        Celda(int coordenadaX, int coordenadaY, bool estadoMina);

    //metodos para gestionar la posicion en X
        int setCoordenadaX(int coordenadaX);
        int getCoordenadaX();

    //metodos para gestionar la posicion en Y
        int setCoordenadaY(int coordenadaY);
        int getCoordenadaY();

    //metodos para gestionar la presencia de una mina
        bool setMina(bool estadoMina);
        bool getMina();

    //metodos para gestionar si la mina ha sido revelada por el jugador
        bool setMinaDescubierta(bool minaDescubierta);
        bool getMinaDescubierta();

    //Imprime la informacion actual de la celda en consola
        void imprimirCelda();
    protected:

    private:

    //atributos privados para el encapsulamiento de datos
        int coordenadaX, coordenadaY;
        bool mina, minaDescubierta;
};

#endif // CELDA_H
