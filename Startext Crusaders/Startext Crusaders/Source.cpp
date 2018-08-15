#include "Jugador.h"
#include "Cuarto.h"
#include "Mapa.h"
#include <time.h>
#include <Windows.h>

int main()
{
	/*srand(time(NULL));
	Jugador prota("Jotaro");//con el parentesis llamamos al otro contructor Jugador que hicimos 
	cuarto cuartoActual(0,0);
	Mapa mapaNuevo;

	std::cout << prota.hp << prota.mp << prota.name << prota.dex << prota.intel << prota.str <<std::endl;
	std::cout << cuartoActual.descripcion <<std::endl;
	bool canMoveRight, canMoveLeft, canMoveUp, canMoveDown;
	std::string input;

	Jugador player;

	player.nombreProta = "NotJotaro";
	while (true)
	{
		canMoveDown = canMoveLeft = canMoveRight = canMoveUp = false;
		if (prota.posX > 0)
			canMoveLeft = true;
		if (prota.posY > 0)
			canMoveDown = true;
		if (prota.posX < 10)
			canMoveRight = true;
		if (prota.posY < 10)
			canMoveUp = true;
		std::cout << "El jugador entra a una habitacion... " <<  mapaNuevo.arreglo[prota.posX, prota.posY]->descripcion << std::endl;
		std::cout << "decide una dirección (direcciones disponibles: nada";
		if (canMoveLeft)
			std::cout << ", izquierda";
		if (canMoveRight)
			std::cout << ", derecha";
		if (canMoveUp)
			std::cout << ", arriba";
		if (canMoveDown)
			std::cout << ", abajo";
		std::cout << "): " << std::endl;
		std::cin >> input;
		if (input == "izquierda" && canMoveLeft)
			--prota.posX;
		if (input == "derecha" && canMoveRight)
			++prota.posX;
		if (input == "arriba" && canMoveUp)
			++prota.posY;
		if (input == "abajo" && canMoveDown)
			--prota.posY;
		system("pause");
	}
	system("pause");*/
}

