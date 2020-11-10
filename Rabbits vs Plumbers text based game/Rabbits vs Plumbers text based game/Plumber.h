#pragma once
#include <iostream>
#include <string>
#include "Character.h"
#include "Shop.h"

class Plumber : public Character
{
public:
	//member variables
	int wallet;
	int health;
	
	int dealDamageValue;
	

	//member functions
	Plumber();

	void inventory(Character t_character);
	void output(Character t_character);
	void attack(Character t_character);


};

