#pragma once
#include "RPG.h"
#include "Objeto.h"
#include <string>
#include <vector>
class Jugador : public RPG //herencia es publica para que podamos usarlo.
{
public://public para que pueda uarlo
	

	std::string nombreProta;

	void usarObjeto(std::string Nombre);
	void anadirObjeto(Objeto * objeto /*Viejo, porfa, acuerdate, siempre que crees una variable o un parametro ponle nombre.*/);

	void guardarJugador();
	void cargarJugador();

	Jugador();
	Jugador(std::string nombre);
	~Jugador();

private:
	std::vector<Objeto *> inventario;
};