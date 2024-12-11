#include "../include/player.hpp"

// Check collisions between two players' in-game sheep
void Player::checkCollisions(Player& opponent)
{
    for (size_t i = 0; i < inGameSheeps.size(); ++i)
    {
        for (size_t j = 0; j < opponent.inGameSheeps.size(); ++j)
        {
            const Sprite& mySprite = inGameSheeps[i].getSprite();
            const Sprite& opponentSprite = opponent.inGameSheeps[j].getSprite();

            // Get bounding boxes
            FloatRect myBounds = mySprite.getGlobalBounds();
            FloatRect opponentBounds = opponentSprite.getGlobalBounds();

            // Check if they intersect
            if (myBounds.intersects(opponentBounds))
            {
                // Handle collision
                handleCollision(i, j, opponent);
            }
        }
    }
}

// Handle the effects of collision
void Player::handleCollision(size_t myIndex, size_t opponentIndex, Player& opponent)
{
    // Example collision handling: damage and removal
    inGameSheeps[myIndex].takeDamage(opponent.inGameSheeps[opponentIndex].getDamage());
    opponent.inGameSheeps[opponentIndex].takeDamage(inGameSheeps[myIndex].getDamage());

    // Remove sheep if health <= 0
    if (inGameSheeps[myIndex].isDead())
    {
        inGameSheeps.erase(inGameSheeps.begin() + myIndex);
    }

    if (opponent.inGameSheeps[opponentIndex].isDead())
    {
        opponent.inGameSheeps.erase(opponent.inGameSheeps.begin() + opponentIndex);
    }
}