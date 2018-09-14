#include "Jugador.h"
#include "Civilizacion.h"
#include <fstream>
#include <iostream>
#include <string>


Jugador::Jugador() {

}

Jugador::Jugador(string pnombre, Civilizacion pcivi) {
    nombre = pnombre;
    civi = pcivi;
}

Jugador::~Jugador() {

}

//getters
string Jugador::getNombre() {
    return nombre;
}

Civilizacion Jugador::getCivi() {
    return civi;
}

//setters
void Jugador::setNombre(string pnombre) {
    nombre = pnombre;
}

void Jugador::setCivi(Civilizacion pcivi) {
    civi = pcivi;
}

void Jugador::read(ifstream& in){
  int size; 
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  //buffer de nombre
  char nameBuffer[size];
  in.read(nameBuffer,size);
  
  nombre=nameBuffer;
}

void Jugador::write(ofstream& out){

  //nombre
  int size=nombre.size();
   out.write(reinterpret_cast<char*>(&size),sizeof(int));
   out.write(nombre.data(),nombre.size());
}

istream& operator>>(istream& in, Jugador& jug){
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
          jug.nombre = parse;
           break;
      }
      cont++;
    }
  }

  return in;
}


ostream& operator<<(ostream& out, const Jugador& jug){

   out<<jug.nombre<<endl;;
   return out;

}