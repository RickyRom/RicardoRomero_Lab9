#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class Civilizacion {
    private:
        string nombre;
        int oro;
        int madera;
        int piedra;
        int alimento;
        int poblacionActual;
        int poblacionMax;
        int capacidadPoblacional;

    public:
        Civilizacion();
        Civilizacion(string,int,int,int,int,int,int,int);
        ~Civilizacion();

        //getters
        string getNombre();
        int getOro();
        int getMadera();
        int getPiedra();
        int getAlimento();
        int getPoblacionActual();
        int getPoblacionMax();
        int getCapacidadPoblacional();

        //setters
        void setNombre(string);
        void setOro(int);
        void setMadera(int);
        void setPiedra(int);
        void setAlimento(int);
        void setPoblacionActual(int);
        void setPoblacionMax(int);
        void setCapacidadPoblacional(int);


        void write(ofstream&);
        void read(ifstream&);

        friend ostream& operator<<(ostream&,const Civilizacion&);

        friend istream& operator>>(istream&, Civilizacion&);
        
};
#endif