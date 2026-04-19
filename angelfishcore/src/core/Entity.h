/*an enity is an object in a game it can be an level, a player pretty much anything,
 however certain things may need it's own independent class in the future theres is no
 enity.cpp files since the implementation is the object it self like example player.cpp
 however a player.cpp would need its own player.h file to call on the main.cpp file*/
#pragma once
#include "../../include/raylib.h"

class Entity {
public:
    Vector2 position;

    virtual void Update() {}
    virtual void Draw() {}
};