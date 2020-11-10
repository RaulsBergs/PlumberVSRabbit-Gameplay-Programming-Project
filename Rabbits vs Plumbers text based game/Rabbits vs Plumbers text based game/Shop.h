#pragma once
#include <iostream>
#include "Character.h"

class Shop
{
public:
	//member variables
	int m_playerNumInput;
	
	bool m_exitShop = false;

	//member functions
	void output(Character character);
	void processPlayerEvents(Character t_character);
};

