Main:	empires.o Civilizacion.o Jugador.o Edificio.o Casas.o Cuarteles.o Castillos.o Tropa.o Soldado.o Caballeria.o GuerrerosE.o
	g++ empires.o Civilizacion.o Jugador.o Edificio.o Casas.o Cuarteles.o Castillos.o Tropa.o Soldado.o Caballeria.o GuerrerosE.o -o Main


empires.o: empires.cpp Civilizacion.h Jugador.h Edificio.h Casas.h Cuarteles.h Castillos.h Tropa.h Soldado.h Caballeria.h GuerrerosE.h
	g++ -c empires.cpp 

Civilizacion.o: Civilizacion.cpp Civilizacion.h
	g++ -c Civilizacion.cpp 

Jugador.o: Jugador.cpp Jugador.h
	g++ -c Jugador.cpp 

Edificio.o: Edificio.cpp Edificio.h
	g++ -c Edificio.cpp 

Casas.o: Casas.cpp Casas.h Edificio.cpp Edificio.h
	g++ -c Casas.cpp 

Cuarteles.o: Cuarteles.cpp Cuarteles.h Edificio.cpp Edificio.h
	g++ -c Cuarteles.cpp 

Castillos.o: Castillos.cpp Castillos.h Edificio.cpp Edificio.h
	g++ -c Castillos.cpp 

Tropa.o: Tropa.cpp Tropa.h
	g++ -c Tropa.cpp 

Soldado.o: Soldado.cpp Soldado.h Tropa.cpp Tropa.h
	g++ -c Soldado.cpp 

Caballeria.o: Caballeria.cpp Caballeria.h Tropa.cpp Tropa.h
	g++ -c Caballeria.cpp 

GuerrerosE.o: GuerrerosE.cpp GuerrerosE.h Tropa.cpp Tropa.h
	g++ -c GuerrerosE.cpp 
