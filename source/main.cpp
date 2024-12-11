#include "../include/universal.hpp"
#include "../include/game.hpp"

void play()
{
    RenderWindow window(VideoMode(WIDTH, HEIGHT), "BA'BA'ee's Fight");
    Game game(WIDTH, HEIGHT, window);
    game.run(window);
}

int main(int argc, char const *argv[])
{
    play();
    return 0;
}
