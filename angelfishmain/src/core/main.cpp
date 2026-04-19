
/*
    =========================================================
    Angel-fish Engine
    ---------------------------------------------------------
    Entry Point (main.cpp)

    A lightweight open-source game engine built with raylib.

    Copyright (c) 2026 Aaron Gonzalez (TurtleKoopa)
    GitHub: https://github.com/turtlekoopa/angelfish-engine

    Licensed under the MIT License.
    See LICENSE file for details.
    =========================================================
*/
#include "Window.h"
#include "../../include/raylib.h"
#include "stdio.h"
#include "angelfish_splash.h"
#include "scenemanager.h"
#include "samplescene.h"


int main() {
    SetTraceLogLevel(LOG_ERROR);
    SetTraceLogLevel(LOG_WARNING);
    angelfish_print_splash();
    Window window(800,600, "angelfish core");
    ChangeDirectory(GetApplicationDirectory());
    SceneManager manager;
    //chnage scene to a smaple scene
    manager.changeScene(std::make_unique<samplescene>());

    while (!window.ShouldClose())
    {
        manager.update();
        window.BeginFrame();
        
        manager.draw();
        ClearBackground(WHITE);
       
        window.EndFrame();
    }

   
    return 0;
}