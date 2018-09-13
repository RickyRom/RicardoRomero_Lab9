#ifndef CIVILIZACION_H
#define CIVILIZACION_H

using namespace std;

class Civilizacion {
    private:
        int oro;
        int madera;
        int piedra;
        int alimento;
        int poblacionActual;
        int poblacionMax;
        int capacidadPoblacional;

    public:
        Civilizacion();
        Civilizacion(int,int,int,int,int,int,int);
        ~Civilizacion();

        //getters
        int getOro();
        int getMadera();
        int getPiedra();
        int getAlimento();
        int getPoblacionActual();
        int getPoblacionMax();
        int getCapacidadPoblacional();

        //setters
        void setOro(int);
        void setMadera(int);
        void setPiedra(int);
        void setAlimento(int);
        void setPoblacionActual(int);
        void setPoblacionMax(int);
        void setCapacidadPoblacional(int);
};
#endif