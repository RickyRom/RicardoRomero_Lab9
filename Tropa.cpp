#include "Tropa.h"

Tropa::Tropa() {

}

Tropa::Tropa(string psexo, int pcostoalim, int pcostooro, int pataque, int pdefensa, int pvida,
 int pvelocidad, string ptiempoentre) {
     sexo = psexo;
     costoAlimen = pcostoalim;
     costoOro = pcostooro;
     ataque = pataque;
     defensa = pdefensa;
     vida = pvida;
     velocidad = pvelocidad;
     tiempoEntre = ptiempoentre;
 }

 Tropa::~Tropa() {

 }

 //getters
 string Tropa::getSexo() {
     return sexo;
 }

 int Tropa::getCostoAlimen() {
     return costoAlimen;
 }

 int Tropa::getcostoOro() {
     return costoOro;
 }

 int Tropa::getAtaque() {
     return ataque;
 }

 int Tropa::getDefensa() {
     return defensa;
 }

 int Tropa::getVida() {
     return vida;
 }

 int Tropa::getVelocidad() {
     return velocidad;
 }

 string Tropa::getTiempoEntre() {
     return tiempoEntre;
 }

 //setters
void Tropa::setSexo(string sex) {
    sexo = sex;
}

void Tropa::setCostoAlimen(int ca) {
    costoAlimen = ca;
}

void Tropa::setcostoOro(int co) {
    costoOro = co;
}

void Tropa::setAtaque(int ata) {
    ataque = ata;
}

void Tropa::setDefensa(int defe) {
    defensa = defe;
}

void Tropa::setVida(int vid) {
    vida = vid;
}

void Tropa::setVelocidad(int velo) {
    velocidad = velo;
}

void Tropa::setTiempoEntre(string te) {
    tiempoEntre = te;
}