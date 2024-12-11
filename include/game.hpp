#include "universal.hpp"

enum State
{
    IN_GAME,
    PAUSED_MENU,
    MAIN_MENU,
    VICTORY_SCREEN,
    GAMEOVER_SCREEN,
    EXIT
};

class Game
{
public:
    Game(int width, int height);
    void run();
    ~Game();
    RenderWindow window;

private:
    State state;
    void update();
    void render(); //draws evertthing
    void handle_event();
    void handle_key_up(Keyboard::Key key);
    void handle_key_down(Keyboard::Key key);
    void handle_mouse_press(Event ev);
    void handle_mouse_release(Event ev);

};