#include "Casas.h"
#include "Edificio.h"
#include <iostream>
#include <string>

using namespace std;

Casas::Casas() {

}

Casas::Casas(string pcolor, int costooro, int costopiedra, int costomadera)
:Edificio(costooro, costopiedra, costomadera) {
    color = pcolor;
}

Casas::~Casas() {

}

string Casas::getColor() {
    return color;
}

void Casas::setColor(string colo) {
    color = colo;
}

