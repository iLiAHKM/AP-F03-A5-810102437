#ifndef GAME_HPP
#define GAME_HPP
#include "universal.hpp"
#include "player.hpp"

class Game
{
public:
    Game(int width, int height, RenderWindow& window);
    ~Game(){};
    
    void run(RenderWindow& window);
    void update();
    void render(RenderWindow& window); //draws evertthing
    void handle_event(RenderWindow& window, Sheep& currentSheep1, Sheep& currentSheep2);
    void handle_key_up(Keyboard::Key key);
    void handle_key_down(Keyboard::Key key);
    void handle_mouse_press(Event ev);
    void handle_mouse_release(Event ev);

private:
    GameState state;
    Texture backgroundTexture;
    Sprite backgroundSprite;
    Player player1;
    Player player2;

    //Player playyer(0, 0);


};

#endif

