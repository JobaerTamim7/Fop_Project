#pragma once

#include"MainMenu.h"
#include"Game.h"
#include"Instruct.h"
#include"CommonFunction.h"


// MAIN MENU
enum game_state
{
	MAIN_MENU,
	TUTORIAL,
	GAME,
	QUIT
};

void change_state_main_menu(game_state& , MainMenu&,common::Transition&);
void change_state_game(game_state&, Game&,common::Transition&);
void change_state_tutorial(game_state&, Instruct&,common::Transition&);

