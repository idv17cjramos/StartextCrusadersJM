#include "Jugador.h"

void Jugador::usarObjeto(std::string Nombre)
{
}

void Jugador::anadirObjeto(Objeto /*tipo de datos*/ * objeto /*nombre del parametro/variable*/)
{
	inventario.push_back(objeto /*Si no les pones nombre, pasas el tipo de datos a las funciones que usas y por eso no te salen las cosas muchas veces :C*/);
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
