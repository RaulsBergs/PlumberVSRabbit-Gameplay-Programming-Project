#include "Character.h"

void Character::setHealth(int healthValue)
{
	health = healthValue;
}

void Character::output()
{
	int index;

	std::cout << std::endl << "---Spells---" << std::endl << std::endl;

	for (index = 0; index < m_amountOfSpells; index++)
	{
		std::cout << "[ " << std::to_string(index + 1) << " ]" << " ~ "  
		<< m_characterSpellNames[index] << " ~" << std::endl;
	}

	std::cout << std::endl << "---Melee Attacks---" << std::endl << std::endl;

	for (index = 0; index < m_amountOfmeleeAttacks; index++)
	{
		std::cout << "[ " << std::to_string(index + m_amountOfSpells + 1) << " ]" << " ~ " 
		<< m_characterMeleeNames[index] << " ~" << std::endl;
	}

	std::cout << std::endl << "---Shield Abilities---" << std::endl << std::endl;

	for (index = 0; index < m_amountOfDefenceMoves; index++)
	{
		std::cout << "[ " << std::to_string(index + m_amountOfSpells + m_amountOfmeleeAttacks + 1) << " ]" << " ~ "
			<< m_characterDefenceNames[index] << " ~" << std::endl;
	}

}
