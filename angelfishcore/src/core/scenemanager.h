// a scene manager not the best but would be improvement in the future
#pragma once
#include <memory>
#include "scene.h"

class SceneManager
{
private:
    //change the scene 
    std::unique_ptr<Scene> currentScene;

public:
    void changeScene(std::unique_ptr<Scene> newScene)
    {
        if (currentScene)
        {
            currentScene->unload();
        }

        currentScene = std::move(newScene);
    }

    void update()
    {
        if (currentScene)
            currentScene->update();
    }

    void draw()
    {
        if (currentScene)
            currentScene->draw();
    }
};