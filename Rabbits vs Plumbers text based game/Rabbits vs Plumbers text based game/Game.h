#pragma once

#include "Plumber.h"
#include "Rabbit.h"
#include "Character.h"
#include "Shop.h"
#include <iostream>

enum m_gameStates {ShopGameState , FightGameState , EndGameState};
int m_currentGameState = 0;
int endGame = 10;

Shop shop;
Character character;
Plumber plumber;
Rabbit rabbit;

void dealDamageToRabbit(int t_damage);
void dealDamageToPlumber(int t_damage);