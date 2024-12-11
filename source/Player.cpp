#include "../include/player.hpp"

Player::Player(PlayerSide _side = WHITE): health(INTIAL_HEALTH), side(_side)
{
    for(int i=0;i<3;i++)
    {
        waitingSheeps.push_back(Sheep(0, LINE1, side));
    }
    
}

void Player::checkThreeWaitingSheeps()
{
    while (waitingSheeps.size() < 3)
    {
        waitingSheeps.push_back(Sheep(0, LINE1, side));
    }
}

void Player::moveSheepToInGame()
{
    inGameSheeps.push_back(waitingSheeps.front());

    waitingSheeps.erase(waitingSheeps.begin());

    checkThreeWaitingSheeps();

}

// void Player::checkCollisions(Player& player2)
// {
//     for (size_t i = 0; i < inGameSheeps.size(); ++i)
//     {
//         for (size_t j = 0; j < player2.inGameSheeps.vectorsize(); ++j)
//         {
//             const Sprite& mySprite = inGameSheeps[i].getSprite();
//             const Sprite& opponentSprite = player2.inGameSheeps[j].getSprite();
    
//             FloatRect myBounds = mySprite.getGlobalBounds();
//             FloatRect opponentBounds = opponentSprite.getGlobalBounds();
    
//             if (myBounds.intersects(opponentBounds))
//             {        
//                 handleCollision(i, j, layer2);
//             }
//         }
//     }
// }


// void Player::handleCollision(size_t myIndex, size_t opponentIndex, Player& player2)
// {
    
// }
