#include "Civilizacion.h"

Civilizacion::Civilizacion() {

}

Civilizacion::Civilizacion(int poro, int pmadera, int ppiedra, int palimento, int ppoblacionactual,
int ppoblacionmax, int pcapacidadpoblacional) {
    oro = poro;
    madera = pmadera;
    piedra = ppiedra;
    alimento = palimento;
    poblacionActual = ppoblacionactual;
    poblacionMax = ppoblacionmax;
    capacidadPoblacional = pcapacidadpoblacional;
}

Civilizacion::~Civilizacion() {

}

//getters
int Civilizacion::getOro() {
    return oro;
}

int Civilizacion::getMadera() {
    return madera;
}

int Civilizacion::getPiedra() {
    return piedra;
}

int Civilizacion::getAlimento() {
    return alimento;
}

int Civilizacion::getPoblacionActual() {
    return poblacionActual;
}

int Civilizacion::getPoblacionMax() {
    return poblacionMax;
}

int Civilizacion::getCapacidadPoblacional() {
    return capacidadPoblacional;
}

//setters
void Civilizacion::setOro(int poro) {
    oro = poro;
}

void Civilizacion:: setMadera(int pmadera) {
    madera = pmadera;
}

void Civilizacion::setPiedra(int ppiedra) {
    piedra = ppiedra;
}

void Civilizacion::setAlimento(int palimento) {
    alimento = palimento;
}

void Civilizacion::setPoblacionActual(int pa) {
    poblacionActual = pa;
}

void Civilizacion::setPoblacionMax(int pm) {
    poblacionMax = pm;
}

void Civilizacion::setCapacidadPoblacional(int cp) {
    capacidadPoblacional = cp;
}