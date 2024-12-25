
#include "../include/game.hpp"

void play()
{
    RenderWindow window(VideoMode(WIDTH, HEIGHT), "BA'BA'ee's Fight");
    Game game(WIDTH, HEIGHT, window);
    Music music;
    music.openFromFile("include/audio.ogg");
        

    
    while (window.isOpen())
    {
        music.play();
        sleep(milliseconds(100));
        game.run(window);

    }
    
}

int main(int argc, char const *argv[])
{
    
    play();
    return 0;
}
