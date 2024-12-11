#ifndef SHEEP_HPP
#define SHEEP_HPP
#include "universal.hpp"
#include "../include/numberGenerator.hpp"
#include "initialSheepProperties.hpp"
#include "initialSheepFrames.hpp"
class Sheep
{
public:
    Sheep(int _y, LineState line, PlayerSide _side);
    ~Sheep(){}
    void initial_sheep_frames();
    void initial_sheep_properties();
    void move(float deltX, float deltY);
    Texture get_texture(){return texture;}
    Sprite get_sprite(){return sprite;}
private:
    PlayerSide side;
    SheepConfigs sheep;
    LineState lineState;
    int yPos;
    Texture texture;
    Sprite sprite;
    Vector2f pos;
    
    IntRect frame;
};
#endif