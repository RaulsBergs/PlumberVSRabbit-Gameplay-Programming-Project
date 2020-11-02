#pragma once
#include <iostream>
#include <string>

class Character
{
public:
	//member variables
	int health;
	static const int m_amountOfSpells = 5;
	static const int m_amountOfmeleeAttacks = 7;
	static const int m_amountOfDefenceMoves = 3;

	std::string m_characterSpellNames[m_amountOfSpells]{ "Unholy Wave" , "Lunar Explosion" ,
										"Hex of hell" , "Corruption of Souls" ,
										"Hypocrisy of Spirits" };

	std::string m_characterMeleeNames[m_amountOfmeleeAttacks]{ "Slice" , "Strike" , "Jab" , "Punch" ,
															   "Sweep" , "Bite" , "Assault" };

	std::string m_characterDefenceNames[m_amountOfDefenceMoves]{ "Shield" , "Block" , "Counter-Attack" };

	//member functions
	void setHealth(int healthValue);
	virtual void output();
};

