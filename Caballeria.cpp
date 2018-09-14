#include "Tropa.h"
#include "Caballeria.h"

Caballeria::Caballeria() {

}

Caballeria::Caballeria(string psexo, int pcostoalim, int pcostooro, int pataque, int pdefensa, int pvida,
 int pvelocidad, string ptiempoentre):Tropa( psexo, pcostoalim, pcostooro, pataque, pdefensa, pvida,
  pvelocidad, ptiempoentre) {

  }

Caballeria::~Caballeria() {

}