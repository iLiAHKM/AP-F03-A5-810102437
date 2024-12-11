#include "../include/sheep.hpp"


Sheep::Sheep(int _y, LineState line, PlayerSide _side): yPos(_y), lineState(line), side(_side)
{
    initial_sheep_properties();
    initial_sheep_frames();
    
}

void Sheep::move(float deltX, float deltY)
{
    sprite.move(deltX, deltY);
}

void Sheep::initial_sheep_frames()
{
    if(sheep.name == TIMMY && side == WHITE)
    {
        texture.loadFromFile(TIMMYmOVEwHITEpATH);
        frame.height = fRAMEwIDTHtIMMY;
        frame.width = fRAMEhEIGHTtIMMY;
        frame.left = fRAMElEFTtIMMY;
        frame.top = fRAMEtOPtIMMY;
    }
    else if(sheep.name == SHAUN && side == WHITE)
    {
        texture.loadFromFile(SHAUNmOVEwHITEpATH);
        frame.height = fRAMEwIDTHsHAUN;
        frame.width = fRAMEhEIGHTsHAUN;
        frame.left = fRAMElEFTsHAUN;
        frame.top = fRAMEtOPsHAUN;
    }
    else if(sheep.name == MEOW && side == WHITE)
    {
        texture.loadFromFile(MEOWsTANDHITEpATH);
        frame.height = fRAMEwIDTHmEOWwHITE;
        frame.width = fRAMEhEIGHTmEOWwHITE;
        frame.left = fRAMElEFTmEOWwHITE;
        frame.top = fRAMEtOPmEOWwHITE;
    }

    if(sheep.name == TIMMY && side == BLACK)
    {
        texture.loadFromFile(TIMMYmOVEbLACKpATH);
        frame.height = fRAMEwIDTHtIMMY;
        frame.width = fRAMEhEIGHTtIMMY;
        frame.left = fRAMElEFTtIMMY;
        frame.top = fRAMEtOPtIMMY;
    }
    else if(sheep.name == SHAUN && side == BLACK)
    {
        texture.loadFromFile(SHAUNmOVEbLACKpATH);
        frame.height = fRAMEwIDTHsHAUN;
        frame.width = fRAMEhEIGHTsHAUN;
        frame.left = fRAMElEFTsHAUN;
        frame.top = fRAMEtOPsHAUN;
    }
    else if(sheep.name == MEOW && side == BLACK)
    {
        texture.loadFromFile(MEOWsTANbLACKpATH);
        frame.height = fRAMEwIDTHmEOWbLACK;
        frame.width = fRAMEhEIGHTmEOWbLACK;
        frame.left = fRAMElEFTmEOWbLACK;
        frame.top = fRAMEtOPmEOWbLACK;
    }
    
    sprite.setTexture(texture);
    sprite.setTextureRect(frame);
}

void Sheep::initial_sheep_properties()
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