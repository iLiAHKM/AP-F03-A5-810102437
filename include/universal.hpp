#ifndef UNIVERSAL_HPP
#define UNIVERSAL_HPP
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <list>
#include <math.h>
#include <random>
#include <algorithm>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include "config.hpp"
using namespace std;
using namespace sf;

const unsigned int WIDTH = 1024;
const unsigned int HEIGHT = 1024;
const unsigned int FRAME_RATE = 60;
const string BACKgROUNDpATH = "APF03-A5-Sprites/sprites/background/background.png";

const string TIMMYmOVEwHITEpATH = "APF03-A5-Sprites/sprites/white-sheep/move.png";
const string TIMMsTANDwHITEpATH = "APF03-A5-Sprites/sprites/white-sheep/stand.png";
const string SHAUNmOVEwHITEpATH = "APF03-A5-Sprites/sprites/white-goat/move.png";
const string SHAUsTANDwHITEpATH = "APF03-A5-Sprites/sprites/white-goat/stand.png";
const string MEOWmOVEwHITEpATH = "APF03-A5-Sprites/sprites/ram/move.png";
const string MEOWsTANDHITEpATH = "APF03-A5-Sprites/sprites/ram/stand.png";

const string TIMMYmOVEbLACKpATH = "APF03-A5-Sprites/sprites/black-sheep/move.png";
const string TIMMsTANDbLACKpATH = "APF03-A5-Sprites/sprites/black-sheep/stand.png";
const string SHAUNmOVEbLACKpATH = "APF03-A5-Sprites/sprites/black-goat/move.png";
const string SHAUsTANDbLACKpATH = "APF03-A5-Sprites/sprites/black-goat/stand.png";
const string MEOWmOVEbLACKpATH = "APF03-A5-Sprites/sprites/boar/move.png";
const string MEOWsTANbLACKpATH = "APF03-A5-Sprites/sprites/boar/stand.png";

const int fRAMEwIDTHtIMMY = 92;
const int fRAMEhEIGHTtIMMY = 62;
const int fRAMElEFTtIMMY = 13;
const int fRAMEtOPtIMMY = 6;

const int fRAMEwIDTHsHAUN = 72;
const int fRAMEhEIGHTsHAUN = 79;
const int fRAMElEFTsHAUN = 10;
const int fRAMEtOPsHAUN = 5;

const int fRAMEwIDTHmEOWwHITE = 98;
const int fRAMEhEIGHTmEOWwHITE = 63;
const int fRAMElEFTmEOWwHITE = 4;
const int fRAMEtOPmEOWwHITE = 7;

const int fRAMEwIDTHmEOWbLACK = 150;
const int fRAMEhEIGHTmEOWbLACK = 97;
const int fRAMElEFTmEOWbLACK = 5;
const int fRAMEtOPmEOWbLACK = 7;

const string TIMMY = "timmy";
const string SHAUN = "shaun";
const string MEOW = "meow";

enum GameState
{
    MAIN_MENU,
    PAUSED,
    IN_PROGRESS,
    RESAULT,
    EXIT 

};

enum LineState
{
    LINE1,
    LINE2,
    LINE3, 
    LINE4
};
enum PlayerSide
{
    WHITE,
    BLACK
}


#endif