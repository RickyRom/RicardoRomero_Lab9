#include "Tropa.h"
#include "Soldado.h"

Soldado::Soldado() {

}

Soldado::Soldado(string psexo, int pcostoalim, int pcostooro, int pataque, int pdefensa, int pvida,
 int pvelocidad, string ptiempoentre):Tropa( psexo, pcostoalim, pcostooro, pataque, pdefensa, pvida,
  pvelocidad, ptiempoentre) {

  }

Soldado::~Soldado() {

}

