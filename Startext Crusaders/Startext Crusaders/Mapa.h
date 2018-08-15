#pragma once

#include "Cuarto.h"
#include <iostream>
#include <fstream>
class Mapa
{
public:
	cuarto** arreglo;

	int width;
	int height;



	Mapa(int w, int h);
	Mapa(std::string mapa);
	~Mapa();


	void printMapa();
	void printMapa(std::fstream & archivo);
};
