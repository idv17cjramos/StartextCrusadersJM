#pragma once
#include <string>
#include "Mapa.h"
#include "Jugador.h"

class ManejadorDeComandos
{
public:


	void crearPartida();
	void cargarMapa();
	void guardarPartida();
	void desplagarMapa();


	ManejadorDeComandos(std::string);
	~ManejadorDeComandos();

	Mapa * mapa;
	Jugador * jugador;

};
