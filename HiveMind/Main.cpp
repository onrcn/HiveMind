#include <iostream>
#include "Game.h"

int main(int argc, char** argv)
{
    // Initialize the engine
    Game game;

    // the game loop
    while (game.windowOpen())
    {
        // Update
        game.Update();

        // RenderWindow
        game.Render();
    }

    return 0;
}