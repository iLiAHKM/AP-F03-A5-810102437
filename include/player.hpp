#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "universal.hpp"
#include "sheep.hpp"
class Player
{
public:
    Player(PlayerSide _side);
    ~Player(){};
    void checkThreeWaitingSheeps();
    void moveSheepToInGame();
    void checkCollisions(Player& player2);
    void handleCollision(size_t myIndex, size_t opponentIndex, Player& player2);
    PlayerSide side;
    list<Sheep> waitingSheeps;
    list<Sheep> inGameSheeps;
    int health;

private:
};

#endif