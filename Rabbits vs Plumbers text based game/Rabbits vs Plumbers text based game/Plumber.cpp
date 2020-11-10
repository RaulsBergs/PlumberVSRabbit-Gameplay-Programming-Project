#include "Plumber.h"


//Plumber Constructor
Plumber::Plumber()
{
	health = 100;
	wallet = 50;
	dealDamageValue = 0;
}

void Plumber::inventory(Character t_character)
{

}

void Plumber::output(Character t_character)
{
	int counter = 0;

	std::cout << "--- Abilities ---\n" << std::endl;

	for (counter; counter < t_character.m_amountOfSpells; counter++)
	{
		std::cout << "[" << std::to_string(counter) << 
					 "]" << t_character.m_characterSpellNames[counter] << std::endl;
	}
	for (counter = 0; counter < t_character.m_amountOfMeleeAttacks; counter++)
	{
		std::cout << "[" << std::to_string(counter + m_amountOfSpells) << 
					 "]" << t_character.m_characterMeleeNames[counter] << std::endl;
	}
	for (counter = 0; counter < t_character.m_amountOfDefenceMoves; counter++)
	{
		std::cout << "[" << std::to_string(counter + m_amountOfSpells + m_amountOfMeleeAttacks) <<
					 "]" << t_character.m_characterDefenceNames[counter] << std::endl;
	}

	attack(t_character);
}

void Plumber::attack(Character t_character)
{
	int playerNumberInput;
	std::cout << std::endl << "To attack please enter a number corresponding to the ability:   ";
	std::cin >> playerNumberInput;
	bool attack = true;

	while (attack == true)
	{
		if (playerNumberInput == 0)
		{
			if (t_character.m_UnholyWavePurchased == true)
			{
				dealDamageValue = 5;
				
			}
			else if (t_character.m_UnholyWavePurchased == false)
			{
				std::cout << std::endl << "Ability Not Purchased" << std::endl;
				break;
			}
		}
		if (playerNumberInput == 1)
		{
			if (t_character.m_LunarExplosionPurchased == true)
			{
				dealDamageValue = 10;
			}
			else if (t_character.m_LunarExplosionPurchased == false)
			{
				std::cout << std::endl << "Ability Not Purchased" << std::endl;
				break;
			}
		}
		if (playerNumberInput == 2)
		{
			if (t_character.m_HexOfhellPurchased == true)
			{
				dealDamageValue = 10;
			}
			else if (t_character.m_HexOfhellPurchased == false)
			{
				std::cout << std::endl << "Ability Not Purchased" << std::endl;
				break;
			}
		}
		if (playerNumberInput == 3)
		{
			if (t_character.m_CorruptionOfSoulsPurchased == true)
			{
				dealDamageValue = 20;
			}
			else if (t_character.m_CorruptionOfSoulsPurchased == false)
			{
				std::cout << std::endl << "Ability Not Purchased" << std::endl;
				break;
			}
		}
		if (playerNumberInput == 4)
		{
			if (t_character.m_HypocrisyOfSpiritsPurchased == true)
			{
				dealDamageValue = 30;
			}
			else if (t_character.m_HypocrisyOfSpiritsPurchased == false)
			{
				std::cout << std::endl << "Ability Not Purchased" << std::endl;
				break;
			}
		}
	}
}


