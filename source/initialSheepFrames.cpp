#include "../include/initialSheepFrames.hpp"

void initial_sheep_frames(Sheep& obj)
{
    if(sheep.name == TIMMY && side == WHITE)
    {
        moveTexture.loadFromFile(TIMMYmOVEwHITEpATH);
        standTexture.loadFromFile(TIMMsTANDwHITEpATH);
        moveTexture.
    }
    else if(sheep.name == SHAUN && side == WHITE)
    {
        moveTexture.loadFromFile(SHAUNmOVEwHITEpATH);
        standTexture.loadFromFile(SHAUsTANDwHITEpATH);
    }
    else if(sheep.name == MEOW && side == WHITE)
    {
        moveTexture.loadFromFile(MEOWmOVEbLACKpATH);
        standTexture.loadFromFile(MEOWsTANbLACKpATH);
    }

    if(sheep.name == TIMMY && side == BLACK)
    {
        moveTexture.loadFromFile(TIMMYmOVEbLACKpATH);
        standTexture.loadFromFile(TIMMsTANDbLACKpATH);
    }
    else if(sheep.name == SHAUN && side == BLACK)
    {
        moveTexture.loadFromFile(SHAUNmOVEbLACKpATH);
        standTexture.loadFromFile(SHAUsTANDbLACKpATH);
    }
    else if(sheep.name == MEOW && side == BLACK)
    {
        moveTexture.loadFromFile(MEOWmOVEbLACKpATH);
        standTexture.loadFromFile(MEOWsTANbLACKpATH);
    }
}