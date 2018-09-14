#include <iostream>
#include "Civilizacion.h"
#include "Jugador.h"
#include "Edificio.h"
#include "Casas.h"
#include "Cuarteles.h"
#include "Castillos.h"
#include "Tropa.h"
#include "Caballeria.h"
#include "GuerrerosE.h"
#include "Soldado.h"

#include <fstream>
#include <string>
#include <vector>

void turnoJ1(bool);
void turnoJ2(bool);

using namespace std;

int main() {
	int opcion;
	Civilizacion* civi;
	vector<Civilizacion> cln;

	Jugador* jgdr;
	vector<Jugador> player;

	do{
		cout<<"Bienvenido al Menu de Opciones"<<endl;
		cout<<"1.- Crear Civilizacion"<<endl;
		cout<<"2.- Crear Jugador"<<endl;
		cout<<"3.- Guardar Informacion"<<endl;
		cout<<"4.- Ingresar"<<endl;
		cout<<"5.- Salir"<<endl;

		cin>> opcion;
		switch (opcion) {

			case 1:{
				string nombre;
				int oro;
				int madera;
				int piedra;
				int alimento;
				int poblacionActual;
				int poblacionMax;
				int capacidadPoblacional;

				cout<<"Ingrese Nombre de la Civilizacion: "<<endl;
				cin>> nombre;
				cout<<"Ingrese la cantidad de Oro: "<<endl;
				cin>> oro;
				cout<<"Ingrese la cantidad de Madera: "<<endl;
				cin>> madera;
				cout<<"Ingrese la cantidad de Piedra: "<<endl;
				cin>> piedra;
				cout<<"Ingrese la cantidad de Alimento: "<<endl;
				cin>> alimento;
				cout<<"Ingrese la Poblacion Actual: "<<endl;
				cin>> poblacionActual;
				cout<<"Ingrese la Poblacion Máxima: "<<endl;
				cin>> poblacionMax;
				cout<<"Ingrese la Capacidad de la Poblacion: "<<endl;
				cin>> capacidadPoblacional;

				civi = new Civilizacion(nombre,oro,madera,piedra,alimento,poblacionActual,poblacionMax,
				capacidadPoblacional);
				cln.push_back(*civi);

					ofstream salida ("Civilizaciones.txt", ios::app);
					salida<<*civi;
					salida.close();

					//escribir archvio binario
					ofstream binario("alumnos.dat",ios::binary | ios::app);
					civi -> write(binario);
					binario.close();

					//leer archivo binario
					ifstream readBinary("Civilizaciones.dat",ios::binary);

					Civilizacion otraCivilizacion;
					otraCivilizacion.read(readBinary);
					readBinary.close();
					cout<<otraCivilizacion<<endl;

					delete civi;



				break;
			}
			case 2:{
				if(cln.size() == 0) {
					cout<<"No a creado una civilizacion"<<endl;
				}else{
					string nombre;
        			Civilizacion civil;

					cout<<"Ingrese Nombre del jugador: "<<endl;
					cin>>nombre;
					cout<<"Seleccione Civilizacion a la que pertenece: "<<endl;
					cout << cln.size() << endl;
					for(int i = 0; i < cln.size(); i++){
						cout<<".."<<cln[i].getCapacidadPoblacional()<<endl;
					}

					jgdr = new Jugador(nombre,civil);
					player.push_back(*jgdr);


					ofstream salida ("Jugadores.txt", ios::app);
					salida<<*jgdr;
					salida.close();

					//escribir archvio binario
					ofstream binario("alumnos.dat",ios::binary | ios::app);
					jgdr -> write(binario);
					binario.close();

					//leer archivo binario
					ifstream readBinary("Civilizaciones.dat",ios::binary);

					Jugador otroJugador;
					otroJugador.read(readBinary);
					readBinary.close();
					cout<<otroJugador<<endl;

					delete jgdr;

				}

			}
				
				break;
			case 3:
				
				break;
			case 4:{
				bool gameover = false;

				while(!gameover){
					cout<<"Turno Jugador 1"<<endl;
					turnoJ1(gameover);
					cout<<"Turno JUgador 2"<<endl;
					turnoJ2(gameover);

				}

				break;
			}
				
			case 5:
				cout<<"Tenga Buen Dia"<<endl;
				break;	
		}
	}while(opcion != 5);	
}

void turnoJ1(bool go = false) {
	int opn;
	do{
						
	cout<<"1.- Nuevo Aldeano"<<endl;
	cout<<"2.- Buscar Recursos"<<endl;
	cout<<"3.- Nuevo Edificio"<<endl;
	cout<<"4.- Nueva Tropa"<<endl;
	cout<<"5.- Desterrar Poblacion"<<endl;
	cout<<"6.- Batalla"<<endl;
	cout<<"7.- Finalizar Turno"<<endl;
	cout<<"8.- Volver al menu principal"<<endl;
	cin>> opn;
	switch (opn) {

		case 1:
						
			break;
		case 2:
								
	 		break;
		case 3:
								
			break;
		case 4:
								
			break;
		case 5:
						
			break;
		case 6:
							
			break;
		case 7:
			go = true;							
			break;
		case 8:

			break;	
		}
	}while(opn != 8);
}

void turnoJ2(bool go = false) {
	int opn;
	do{
						
	cout<<"1.- Nuevo Aldeano"<<endl;
	cout<<"2.- Buscar Recursos"<<endl;
	cout<<"3.- Nuevo Edificio"<<endl;
	cout<<"4.- Nueva Tropa"<<endl;
	cout<<"5.- Desterrar Poblacion"<<endl;
	cout<<"6.- Batalla"<<endl;
	cout<<"7.- Finalizar Turno"<<endl;
	cout<<"8.- Volver al menu principal"<<endl;
	cin>> opn;
	switch (opn) {

		case 1:
						
			break;
		case 2:
								
	 		break;
		case 3:
								
			break;
		case 4:
								
			break;
		case 5:
						
			break;
		case 6:
							
			break;
		case 7:
			go = true;													
			break;
		case 8:
										
			break;	
		}
	}while(opn != 8);
}