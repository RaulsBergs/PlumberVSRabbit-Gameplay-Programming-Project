#include "Shop.h"

void Shop::output(Character character)
{
	std::cout << "---Shop---" << std::endl << std::endl;
	std::cout << "Abilities for Purchase" << std::endl;
	std::cout << "Balance = " << std::to_string(character.wallet) << std::endl;

	character.output();

	std::cout << std::endl << "To make a purchase enter [0] and to begin round enter [1]:   ";
	std::cin >> m_playerNumInput;

	processPlayerEvents(character);
}

void Shop::processPlayerEvents(Character t_character)
{
	while (m_exitShop == false)
	{
		if (m_playerNumInput == 0)
		{
			std::cout << std::endl << "Please enter the number beside one of the abilities to purchase it:   ";
			std::cin >> m_playerNumInput;

			if (m_playerNumInput >= 0 && m_playerNumInput <= 14)
			{
				if (m_playerNumInput == 0)
				{
					t_character.m_UnholyWavePurchased = true;
				}
				else if (m_playerNumInput == 1)
				{
					t_character.m_HexOfhellPurchased = true;
				}
				else if (m_playerNumInput == 2)
				{
					t_character.m_HypocrisyOfSpiritsPurchased = true;
				}
				else if (m_playerNumInput == 3)
				{
					t_character.m_LunarExplosionPurchased = true;
				}
				else if (m_playerNumInput == 4)
				{
					t_character.m_CorruptionOfSoulsPurchased = true;
				}

				std::cout << "You have purchased " << t_character.m_characterSpellNames[m_playerNumInput] << std::endl;

				t_character.wallet = t_character.wallet - t_character.costOfAbilities[m_playerNumInput];

				std::cout << "You're remaining balance: " << std::to_string(t_character.wallet) << " coins" << std::endl;

				std::cout << "continue Shopping - enter [0] , start game - enter [1]:   ";

				std::cin >> m_playerNumInput;

				if (m_playerNumInput == 0)
				{
					processPlayerEvents(t_character);
				}
				else if (m_playerNumInput == 1)
				{
					m_exitShop = true;
				}
			}
		}
		else if (m_playerNumInput == 1)
		{
			m_exitShop = true;
		}
	}
	
}
