#pragma once
#include <string>
#include <fstream>
#include "Objeto.h"
#include "Enemigo.h"

enum contenidoHabitacion 
{
	llave,
	objeto,
	enemigo,
	vacia,
	stand,
	finDeTipos
};

class cuarto
{
public:

	int cuartoX;
	int cuartoY;

	contenidoHabitacion tipo;//contenido habitacion es un tipo de dato
	std::string descripcion;

	cuarto();
	cuarto(int X, int Y);
	~cuarto();
};

std::istream & operator >> (std::istream& is, contenidoHabitacion & tipo)
{
	int valor;
	is >> valor;
	tipo = (contenidoHabitacion)valor;
	return is;
}
