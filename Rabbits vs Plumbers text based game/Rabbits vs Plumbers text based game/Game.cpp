#include "Game.h"

//system("cls"); //used to clear the screen (only works on windows)


int main()
{
    while (m_currentGameState != endGame)
    {
        if (m_currentGameState == ShopGameState)
        {
            shop.output(character);
            std::cin.get();
            if (shop.m_exitShop == true)
            {
                system("cls");
                m_currentGameState = FightGameState;
            }
        }
        else if (m_currentGameState == FightGameState)
        {
            plumber.output(character);
            std::cin.get();
        }
        else if (m_currentGameState == EndGameState)
        {

        }
    }
    return 0;
}

void dealDamageToRabbit(int t_damage)
{
    if (rabbit.health >= 0)
    {
        rabbit.health -= t_damage;
    }
    if (rabbit.health <= 0)
    {
        std::cout << "Rabbit has been destoyed" << std::endl;
    }
}

void dealDamageToPlumber(int t_damage)
{
    if (plumber.health >= 0)
    {
        plumber.health -= plumber.dealDamageValue;
    }
    if (plumber.health <= 0)
    {
        std::cout << "Plumber has fallen" << std::endl;
    }
}
