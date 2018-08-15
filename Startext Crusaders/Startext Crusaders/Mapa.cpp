#include "Mapa.h"

Mapa::Mapa(int w,int h)
{
	width = w;
	height = h;

	arreglo = new cuarto *[width];
	for (int i = 0; i < width; ++i)
		arreglo[i] = new cuarto [height];
	for (int i = 0; i < width; ++i)
		for (int j = 0; j < height; ++j)
			arreglo[i][j] = cuarto(i, j);
}

Mapa::Mapa(std::string mapa)
{
	std::fstream archivo(mapa,std::ios::in);
	archivo >> width >> height;

	arreglo = new cuarto *[width];
	for (int i = 0; i < width; ++i)
		arreglo[i] = new cuarto[height];
	for (int i = 0; i < width; ++i)
		for (int j = 0; j < height; ++j)
			arreglo[i][j] = cuarto(i, j);
	for (int i = 0; i < width; ++i)
		for (int j = 0; j < height; ++j)
			archivo >> arreglo[i][j].tipo >> arreglo[i][j].cuartoX >> 
			arreglo[i][j].cuartoY;
}

Mapa::~Mapa()
{

}

void Mapa::printMapa()
{
	for (int i = 0; i < width; ++i)
		for (int j = 0; j < height; ++j)
			std::cout << arreglo[i][j].descripcion << " " << arreglo[i][j].cuartoX << " " <<
			arreglo[i][j].cuartoY << std::endl;
}

void Mapa::printMapa(std::fstream & archivo)
{

	archivo<< width << " " << height << std::endl;

	for (int i = 0; i < width; ++i)
		for (int j = 0; j < height; ++j)
			archivo << arreglo[i][j].tipo << " " << arreglo[i][j].cuartoX << " " <<
			arreglo[i][j].cuartoY << std::endl;
}

