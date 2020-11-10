#pragma once
#include <iostream>
#include <string>

class Character
{
public:
	//member variables
	int wallet = 100;
	int abilityPurchasedCounter;

	bool m_UnholyWavePurchased;
	bool m_LunarExplosionPurchased;
	bool m_HexOfhellPurchased;
	bool m_CorruptionOfSoulsPurchased;
	bool m_HypocrisyOfSpiritsPurchased;

	static const int m_amountOfAbilities = 15;

	static const int m_amountOfSpells = 5;
	static const int m_amountOfMeleeAttacks = 7;
	static const int m_amountOfDefenceMoves = 3;

	int costOfAbilities[m_amountOfAbilities] {10 , 15 , 30 , 40 , 40 , 0 , 5 , 5 , 10 , 20 , 25 , 30 , 0 , 20 , 25};

	std::string m_characterSpellNames[m_amountOfSpells]{ "Unholy Wave" , "Lunar Explosion" ,
										"Hex of hell" , "Corruption of Souls" ,
										"Hypocrisy of Spirits" };

	std::string m_characterMeleeNames[m_amountOfMeleeAttacks]{ "Slice" , "Strike" , "Jab" , "Punch" ,
															   "Sweep" , "Bite" , "Assault" };

	std::string m_characterDefenceNames[m_amountOfDefenceMoves]{ "Block" , "Shield" , "Counter-Attack" };

	//member functions
	virtual void output();

};

