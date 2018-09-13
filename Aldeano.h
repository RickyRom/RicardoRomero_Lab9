#ifndef ALDEANO_H
#define ALDEANO_H

#include <string>

using namespace std;

class Aldeano {
    private:
        string sexo;
        int costoAlimentacion;
    
    public:
        Aldeano();
        Aldeano(string,int);
        ~Aldeano();

        //getters
        string getSexo();
        int getCostoAlimentacion();

        //setters
        void setSexo(string);
        void setCostoAlimentacion(int);
};
#endif