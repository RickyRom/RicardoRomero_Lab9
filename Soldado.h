#ifndef SOLDADO_H
#define SOLDADO_H

#include "Tropa.h"

class Soldado: public Tropa {
    private:

    public:
        Soldado();
        Soldado(string,int,int,int,int,int,int,string);
        ~Soldado();
};
#endif