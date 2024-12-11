#include "../include/initialSheepProperties.hpp"
void initial_sheep_properties(SheepConfigs& sheep)
{
    double randomNumber = number_generator();
    if (0 <= randomNumber && randomNumber <= UPPER_BOUND_OF_TIMMY)
    {
        sheep.name = SHEEP_CONFIGS[0].name;
        sheep.damage = SHEEP_CONFIGS[0].demage;
        sheep.strength = SHEEP_CONFIGS[0].strength;
    }
    else if(UPPER_BOUND_OF_TIMMY <= randomNumber && randomNumber <= UPPER_BOUND_OF_SHAUN)
    {
        sheep.name = SHEEP_CONFIGS[1].name;
        sheep.damage = SHEEP_CONFIGS[1].demage;
        sheep.strength = SHEEP_CONFIGS[1].strength;
    }
    else if(UPPER_BOUND_OF_SHAUN <= randomNumber && randomNumber <= UPPER_BOUND_OF_MEOW)
    {
        sheep.name = SHEEP_CONFIGS[2].name;
        sheep.damage = SHEEP_CONFIGS[2].demage;
        sheep.strength = SHEEP_CONFIGS[2].strength;
    }
}