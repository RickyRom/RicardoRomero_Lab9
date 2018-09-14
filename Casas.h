#ifndef CASAS_H
#define CASAS_H

#include <iostream>
#include "Edificio.h"
#include <string>

using namespace std;


class Casas: public Edificio {
    private:
        string color;
    public:
        Casas();
        Casas(string,int,int,int);
        ~Casas();

        string getColor();
        void setColor(string);
};
#endif