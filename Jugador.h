#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
#include "Civilizacion.h"

using namespace std;

class Jugador {
    private:
        string nombre;
        Civilizacion civi;
    
    public:
        Jugador();
        Jugador(string, Civilizacion);
        ~Jugador();

        //getters
        string getNombre();
        Civilizacion getCivi();

        //setters
        void setNombre(string);
        void setCivi(Civilizacion);
};
#endif