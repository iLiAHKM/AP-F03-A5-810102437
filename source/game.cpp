#include "universal.hpp"
#include "system.hpp"

Game::Game(int width, int height)
{
    window.create(VideoMode(WIDTH, HEIGHT), "BA'BA'EEs Fight", Style::Close);
    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(FRAME_RATE);
    this->state = MAIN_MENU;
}

void Game::run()
{
    while(window.isOpen(), this->state != EXIT)
    {

    }
}
