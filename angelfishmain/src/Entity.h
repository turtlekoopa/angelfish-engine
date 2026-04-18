#pragma once
#include "../include/raylib.h"

class Entity {
public:
    Vector2 position;

    virtual void Update() {}
    virtual void Draw() {}
};