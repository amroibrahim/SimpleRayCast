#define SDL_MAIN_HANDLED

#include <iostream>

#include "Game.h"

int main(int argc, char* argv[])
{
    Game game;
    return game.Execute();
}
