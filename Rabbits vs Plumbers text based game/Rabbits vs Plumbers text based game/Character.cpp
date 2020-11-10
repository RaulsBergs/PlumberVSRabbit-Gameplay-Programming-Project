#include "Character.h"


//"graphics" to the console
void Character::output()
{
	int index;

	std::cout << std::endl << "---Spells---" << std::endl << std::endl;

	for (index = 0; index < m_amountOfSpells; index++)
	{
		std::cout << "[ " << std::to_string(index) << " ]" << " ~ "  
				  << m_characterSpellNames[index] << "  " << std::to_string(costOfAbilities[index]) << " coins" << " ~" << std::endl;
	}

	std::cout << std::endl << "---Melee Attacks---" << std::endl << std::endl;

	for (index = 0; index < m_amountOfMeleeAttacks; index++)
	{
		std::cout << "[ " << std::to_string(index + m_amountOfSpells) << " ]" << " ~ " 
				  << m_characterMeleeNames[index] << "  " << std::to_string(costOfAbilities[index + m_amountOfSpells]) << " coins" << " ~" << std::endl;
	}

	std::cout << std::endl << "---Shield Abilities---" << std::endl << std::endl;

	for (index = 0; index < m_amountOfDefenceMoves; index++)
	{
		std::cout << "[ " << std::to_string(index + m_amountOfSpells + m_amountOfMeleeAttacks) << " ]" << " ~ "
				  << m_characterDefenceNames[index] << "  " 
				  << std::to_string(costOfAbilities[index + m_amountOfSpells + m_amountOfMeleeAttacks]) << " coins" << " ~" << std::endl;
	}

}


