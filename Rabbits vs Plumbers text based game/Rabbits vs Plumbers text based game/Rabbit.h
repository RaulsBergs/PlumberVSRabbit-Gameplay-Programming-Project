#pragma once
#include <iostream>
#include "Character.h"


class Rabbit : public Character
{
public:
	//data members
	int amountOfRabbits;
	int health;
	int dealDamageValue = 10;

	//function members
	Rabbit();
	void output();

};

