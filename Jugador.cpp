#include "Jugador.h"
#include "Civilizacion.h"

Jugador::Jugador() {

}

Jugador::Jugador(string pnombre, Civilizacion pcivi) {
    nombre = pnombre;
    civi = pcivi;
}

Jugador::~Jugador() {

}

//getters
string Jugador::getNombre() {
    return nombre;
}

Civilizacion Jugador::getCivi() {
    return civi;
}

//setters
void Jugador::setNombre(string pnombre) {
    nombre = pnombre;
}

void Jugador::setCivi(Civilizacion pcivi) {
    civi = pcivi;
}