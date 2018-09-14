#include <iostream>


using namespace std;

int main() {
	int opcion;
	do{
		cout<<"Bienvenido al Menu de Opciones"<<endl;
		cout<<"1.- Crear Civilizacion"<<endl;
		cout<<"2.- Crear Jugador"<<endl;
		cout<<"3.- Guardar Informacion"<<endl;
		cout<<"4.- Ingresar"<<endl;
		cout<<"5.- Salir"<<endl;

		cin>> opcion;
		switch (opcion) {

			case 1:
				
				break;
			case 2:
				
				break;
			case 3:
				
				break;
			case 4:{
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
						switch (opcion) {

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
								
								break;
							case 8:
								cout<<"Tenga Buen Dia"<<endl;
								break;	
						}
					}while(opcion != 8);

				break;
			}
				
			case 5:
				cout<<"Tenga Buen Dia"<<endl;
				break;	
		}
	}while(opcion != 5);	
}
