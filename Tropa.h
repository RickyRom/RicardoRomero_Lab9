#ifndef TROPA_H
#define TROPA_H

#include <string>
using namespace std;

class Tropa {
    private:
        string sexo;
        int costoAlimen;
        int costoOro;
        int ataque;
        int defensa;
        int vida;
        int velocidad;
        string tiempoEntre;
    
    public:
        Tropa();
        Tropa(string,int,int,int,int,int,int,string);
        ~Tropa();

        //getters
        string getSexo();
        int getCostoAlimen();
        int getcostoOro();
        int getAtaque();
        int getDefensa();
        int getVida();
        int getVelocidad();
        string getTiempoEntre();

        //setters
        void setSexo(string);
        void setCostoAlimen(int);
        void setcostoOro(int);
        void setAtaque(int);
        void setDefensa(int);
        void setVida(int);
        void setVelocidad(int);
        void setTiempoEntre(string);

};
#endif