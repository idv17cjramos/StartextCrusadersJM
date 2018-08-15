#pragma once

#include <iostream>
#include <string>
class RPG
{
public:
	int hp;
	int mp;

	int intel;
	int str;
	int dex;

	int posX;
	int posY;

	std::string name;


	 RPG();
	 RPG(int vida, int mana, std::string neim);
	~RPG();
	
	
};

