#ifndef CABALLERIA_H
#define CABALLERIA_H

#include "Tropa.h"

class Caballeria: public Tropa {
    private:

    public:
        Caballeria();
        Caballeria(string,int,int,int,int,int,int,string);
        ~Caballeria();
};
#endif