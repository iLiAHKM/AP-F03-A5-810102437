#include "../include/player.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

// Constructor
Player::Player() : yPos(0), health(100)
{
    std::srand(std::time(nullptr)); // Seed for random number generation

    // Initialize waitingSheeps with 3 random sheep
    for (int i = 0; i < 3; ++i)
    {
        waitingSheeps.push_back(generateRandomSheep());
    }
}

// Destructor
Player::~Player() {}

// Add sheep to the waiting list
void Player::addToWaitingSheeps(const Sheep& sheep)
{
    waitingSheeps.push_back(sheep);
}

// Move sheep from waiting to in-game list
void Player::moveSheepToInGame(int index)
{
    if (index >= 0 && index < waitingSheeps.size())
    {
        // Move sheep to inGameSheeps
        inGameSheeps.push_back(waitingSheeps[index]);

        // Remove from waitingSheeps
        waitingSheeps.erase(waitingSheeps.begin() + index);

        // Maintain 3 sheep in waiting
        maintainThreeWaitingSheeps();
    }
    else
    {
        std::cerr << "Invalid sheep index!" << std::endl;
    }
}

// Ensure the waiting list always has three sheep
void Player::maintainThreeWaitingSheeps()
{
    while (waitingSheeps.size() < 3)
    {
        waitingSheeps.push_back(generateRandomSheep());
    }
}

// Display sheep stats
void Player::displaySheeps() const
{
    std::cout << "Waiting Sheeps:" << std::endl;
    for (const auto& sheep : waitingSheeps)
    {
        std::cout << "- Sheep at yPos: " << sheep.getYPos() << std::endl;
    }

    std::cout << "In-Game Sheeps:" << std::endl;
    for (const auto& sheep : inGameSheeps)
    {
        std::cout << "- Sheep at yPos: " << sheep.getYPos() << std::endl;
    }
}

// Generate a random sheep
Sheep Player::generateRandomSheep() const
{
    // Random yPos
    int yPos = std::rand() % 500; // Random value between 0 and 500

    // Random LineState (e.g., LINE_STATE_1 or LINE_STATE_2)
    LineState lineState = static_cast<LineState>(std::rand() % 2); // Assuming 2 states

    // Random PlayerSide (WHITE or BLACK)
    PlayerSide side = static_cast<PlayerSide>(std::rand() % 2);

    return Sheep(yPos, lineState, side);
}

