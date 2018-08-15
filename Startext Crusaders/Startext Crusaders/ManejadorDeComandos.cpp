#include "ManejadorDeComandos.h"


void ManejadorDeComandos::crearPartida()
{
	mapa = new Mapa(4, 4);
	jugador = new Jugador("Jotaro");
	std::fstream archivo("elMapa.txt", std::ios::out);

	mapa->printMapa(archivo);

}

void ManejadorDeComandos::cargarMapa()
{
	mapa = new Mapa("elMapa.txt");
}

void ManejadorDeComandos::guardarPartida()
{
}

void ManejadorDeComandos::desplagarMapa()
{
	mapa ->printMapa();
}

ManejadorDeComandos::ManejadorDeComandos(std::string)
{
}


ManejadorDeComandos::~ ManejadorDeComandos()
{

}