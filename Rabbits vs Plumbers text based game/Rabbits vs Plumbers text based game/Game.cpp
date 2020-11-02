#include "Game.h"

//system("cls"); //used to clear the screen (only works on windows)


int main()
{
    Shop shop;
    Character character;
    Plumber plumber;
    Rabbit rabbit;

    Character& player = plumber;
    Character& enemy = rabbit;

    while (m_currentGameState != endGame)
    {
        if (m_currentGameState == ShopGameState)
        {
            shop.output(character);
            std::cin.get();
            system("cls");
        }
        else if (m_currentGameState == FightGameState)
        {

        }
        else if (m_currentGameState == EndGameState)
        {

        }

    }

    return 0;
}
