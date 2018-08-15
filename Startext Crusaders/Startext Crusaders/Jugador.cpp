#include "Jugador.h"

void Jugador::usarObjeto(std::string Nombre)
{
}

void Jugador::anadirObjeto(Objeto *)
{
	inventario.push_back(Objeto);
}

void Jugador::guardarJugador()
{
}

void Jugador::cargarJugador()
{
}

Jugador::Jugador()
{
}

Jugador::Jugador(std::string nombre) : RPG(10,10,nombre)
{
}


Jugador::~Jugador()
{
}
