#ifndef CONFIG_H
#define CONFIG_H

// esta clase se encarga de almacemar y gestionar los parametros de configuracion globales para el funcionamiento del juego
class Config
{
    public:

    //constructor de la clase config para inicializar los valores base
        Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero);

    //metodos para obtener y establecer la cantidad de filas
        int getfilasTablero();
        int setfilasTablero(int filasTablero);

    //metodos para obtener y establecer la cantidad de columnas
        int getcolumnasTablero();
        int setcolumnasTablero(int columnasTablero);

    //metodos para obtener y establecer la cantidad de minas
        int getminasTablero();
        int setminasTablero(int minasTablero);

    //metodos para gestionar el estado del modo desarrollador
        bool getmodoDesarrolladorTablero();
        bool setmodoDesarrolladorTablero(bool modoDesarrolladorTablero);

    //metodos para obtener y establecer las vidas disponibles
        int getvidasTablero();
        int setvidasTablero(int vidasTablero);

    //despliega el menu interactivo para modificar los ajustes
        void menuConfiguracion();
    protected:

    private:

    //variantes que guardan el estado de la configuracion
        int filasTablero;
        int columnasTablero;
        int minasTablero;
        bool modoDesarrolladorTablero;
        int vidasTablero;
};

#endif // CONFIG_H
