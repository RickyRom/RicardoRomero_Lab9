#ifndef EDIFICIO_H
#define EDIFICIO_H

using namespace std;

class Edificio {
    private:
        int costoOro;
        int costoPiedra;
        int costoMadera; 

    public:
        Edificio();
        Edificio(int,int,int);
        ~Edificio();

        //getters
        int getCostoOro();
        int getCostoPiedra();
        int getCostoMadera();

        //setters
        void setCostoOro(int);
        void setCostoPiedra(int);
        void setCostoMadera(int);
};
#endif