#include "RPG.h"

RPG::RPG()
{
}

RPG::RPG(int vida, int mana, std::string neim) : hp(vida), mp(mana), name(neim)//cuanod se crea la clase se va a aestos valores
{
	intel = rand() % 10 +1;
	str = rand() % 10 + 1;
	dex = rand() % 10 + 1;
	posX = rand() % 10;
	posY = rand() % 10;
}

RPG::~RPG()
{
}
