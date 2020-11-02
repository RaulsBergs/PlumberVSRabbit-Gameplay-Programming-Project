#pragma once

#include "Plumber.h"
#include "Rabbit.h"
#include "Character.h"
#include "Shop.h"
#include <iostream>

enum m_gameStates {ShopGameState , FightGameState , EndGameState};
int m_currentGameState = 0;
int endGame = 10;