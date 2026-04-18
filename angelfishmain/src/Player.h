//player header file 

#pragma once
#include "Entity.h"
#include "../include/raylib.h"

class Player : public Entity {
public:
    float speed = 200.0f;
    Texture2D playertex;

    void Load();
    void Unload();

    void Update() override;
    void Draw() override;
};