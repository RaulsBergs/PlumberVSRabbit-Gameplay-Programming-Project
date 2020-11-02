#include "Shop.h"

void Shop::output(Character character)
{
	std::cout << "---Shop---" << std::endl << std::endl;
	std::cout << "Abilities for Purchase" << std::endl;

	character.output();

	std::cout << std::endl << "Please enter a number between [1 - 15] = ";
	std::cin >> m_playerNumInput;
}