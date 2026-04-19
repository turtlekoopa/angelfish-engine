#pragma once
#include "scene.h"
#include <iostream>
#include "../../include/raylib.h"
#include "af_log.h"

class samplescene : public Scene
{
public:
    void update() override
    {
    
        

        if (IsKeyPressed(KEY_F3)) //test an function of the scene
        {
            af_log(AF_LOG_DEBUG,"scene test");
            
        }
    }

    void draw() override
    {
       DrawText("angelfish core!",300,300,50,BLACK);
    }

    void unload() override
    {
        af_log(AF_LOG_INFO,"sample scene unloaded");
    }
};