#include "Civilizacion.h"
#include <fstream>
#include <iostream>
#include <string>


Civilizacion::Civilizacion() {

}

Civilizacion::Civilizacion(string pnombre,int poro, int pmadera, int ppiedra, int palimento, int ppoblacionactual,
int ppoblacionmax, int pcapacidadpoblacional) {
    nombre = pnombre;
    oro = poro;
    madera = pmadera;
    piedra = ppiedra;
    alimento = palimento;
    poblacionActual = ppoblacionactual;
    poblacionMax = ppoblacionmax;
    capacidadPoblacional = pcapacidadpoblacional;
}

Civilizacion::~Civilizacion() {

}

//getters
string Civilizacion::getNombre() {
    return nombre;
}
int Civilizacion::getOro() {
    return oro;
}

int Civilizacion::getMadera() {
    return madera;
}

int Civilizacion::getPiedra() {
    return piedra;
}

int Civilizacion::getAlimento() {
    return alimento;
}

int Civilizacion::getPoblacionActual() {
    return poblacionActual;
}

int Civilizacion::getPoblacionMax() {
    return poblacionMax;
}

int Civilizacion::getCapacidadPoblacional() {
    return capacidadPoblacional;
}

//setters
void Civilizacion::setNombre(string nomb) {
    nombre = nomb;
}
void Civilizacion::setOro(int poro) {
    oro = poro;
}

void Civilizacion:: setMadera(int pmadera) {
    madera = pmadera;
}

void Civilizacion::setPiedra(int ppiedra) {
    piedra = ppiedra;
}

void Civilizacion::setAlimento(int palimento) {
    alimento = palimento;
}

void Civilizacion::setPoblacionActual(int pa) {
    poblacionActual = pa;
}

void Civilizacion::setPoblacionMax(int pm) {
    poblacionMax = pm;
}

void Civilizacion::setCapacidadPoblacional(int cp) {
    capacidadPoblacional = cp;
}

void Civilizacion::read(ifstream& in){
  int size; 
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  //buffer de nombre
  char nameBuffer[size];
  in.read(nameBuffer,size);
  
  nombre=nameBuffer;
}

void Civilizacion::write(ofstream& out){

  //nombre
  int size=nombre.size();
   out.write(reinterpret_cast<char*>(&size),sizeof(int));
   out.write(nombre.data(),nombre.size());
}

istream& operator>>(istream& in, Civilizacion& civil){
  string buffer;
  //leer una línea del archivo
  getline(in,buffer);
  string parse="";
  int cont=0; 
  for(int i = 0; i<buffer.size();i++){
    if(buffer[i]!=',')
      parse+=buffer[i];
    else{
      
      switch(cont){
        case 0:
          civil.nombre = parse;
           break;
      }
      cont++;
    }
  }

  return in;
}


ostream& operator<<(ostream& out, const Civilizacion& civil){

   out<<civil.nombre<<endl;;
   return out;

}

