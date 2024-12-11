#include "../include/game.hpp"

Game::Game(int width, int height, RenderWindow& window)
{
    backgroundTexture.loadFromFile(BACKgROUNDpATH, IntRect(0,0,WIDTH, HEIGHT));
    backgroundSprite.setTexture(backgroundTexture);
    //backgroundTexture.setSmooth(true);
    window.setFramerateLimit(FRAME_RATE);
    player1.side = WHITE;
    player2.side = BLACK;
    state = MAIN_MENU;
}

void Game::run(RenderWindow& window)
{
    while(window.isOpen() && state != EXIT)
    {
        handle_event(window);
        //update();
        render(window);
    }
}

void Game::render(RenderWindow& window)
{
    window.clear();
    window.draw(backgroundSprite);
    for (int i=0; i < player1.inGameSheeps.size(); i++)
    {
        window.draw((player1.inGameSheeps.begin()+1).get_sprite());
    }
    window.display();
    // window.draw(playerSprite);
    // window.draw(enemySprite);
    
    
}

void Game::handle_event(RenderWindow& window, Sheep& currentSheep1, Sheep& currentSheep2)
{
    Event event;
    while(window.pollEvent(event))
    {
        switch (event.type)
        {
        case Event::Closed:
            window.close();
            break;
        case (Event::KeyPressed):
            handle_key_down(event.key.code);
            break;
        case (Event::KeyReleased):
          //  handle_key_up(event.key.code);
            break;
        case (Event::MouseButtonPressed):
            //handle_mouse_press(event);
            break;
        case (Event::MouseButtonReleased):
            //handle_mouse_release(event);
            break;
        default:
            break;
        }
    }
}

void Game::update()
{
   // handle_collision();
   // check_game_state();
    
}
void Game::handle_key_up(Keyboard::Key key){};
void Game::handle_key_down(Keyboard::Key key)
{
    switch (key)
    {
    case Keyboard::Down:
        player1.inGameSheeps.front().move(0, -65);
        break;
    case Keyboard::Up:
        player1.inGameSheeps.front().move(0, 65);
        break;
    case Keyboard::Enter:
        player1.moveSheepToInGame();
        break;

    default:
        break;
    }
};
void Game::handle_mouse_press(Event ev)
{

};
void Game::handle_mouse_release(Event ev)
{
    
};