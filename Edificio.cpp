#include "Edificio.h"

Edificio::Edificio() {

}

Edificio::Edificio(int costooro, int costopiedra, int costomadera) {
    costoOro = costooro;
    costoPiedra = costopiedra;
    costoMadera = costomadera;
}

Edificio::~Edificio() {

}

//getters
int Edificio::getCostoOro() {
    return costoOro;
}

int Edificio::getCostoMadera() {
    return costoMadera;
}

int Edificio::getCostoPiedra() {
    return costoPiedra;
}

//setters
void Edificio::setCostoOro(int co) {
    costoOro = co;
}

void Edificio::setCostoMadera(int cm) {
    costoMadera = cm;
}

void Edificio::setCostoPiedra(int cp) {
    costoPiedra = cp;
}