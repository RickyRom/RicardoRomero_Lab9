#include "Aldeano.h"

Aldeano::Aldeano() {

}

Aldeano::Aldeano(string psexo, int pcostoalimento) {
    sexo = psexo;
    costoAlimentacion = pcostoalimento;
}

Aldeano::~Aldeano() {

}

//getters
string Aldeano::getSexo() {
    return sexo;
}

int Aldeano::getCostoAlimentacion() {
    return costoAlimentacion;
}

//setters
void Aldeano::setSexo(string psexo) {
    sexo = psexo;
}

void Aldeano::setCostoAlimentacion(int ca) {
    costoAlimentacion = ca;
}
