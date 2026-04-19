//nothing special here the acutal code is in the window.cpp file
#pragma once
class Window
{

public:
    Window(int width, int height, const char* title);\
    ~Window();

    bool ShouldClose() const;
    void  BeginFrame();
    void EndFrame();
};


