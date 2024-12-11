#ifndef CONFIG_HPP
#define CONFIG_HPP
#include "universal.hpp"

struct SheepConfigs
{
    string name;
    int damage;
    int strength;
    float displayProbab;
};

const vector<SheepConfigs>  SHEEP_CONFIGS = {{
    {"Timmy", 50, 50, 0.5f},
    {"Shaun", 30, 150, 0.3f}, 
    {"Meow", 10, 250, 0.2f},
}};

constexpr int COOLDOWN_MS = 2000;
constexpr int INTIAL_HEALTH = 400;
constexpr int SPEED_CONSTANT = 300;

#endif