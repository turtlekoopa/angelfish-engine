/* this class is part of the core engine is what is responsible for opening a window 
you probably dont need to touch this */
#include "Window.h"
#include "../include/raylib.h"

Window::Window(int width, int height, const char* title){
    InitWindow(width, height, title);
}

Window::~Window() {
    CloseWindow();
}

bool Window::ShouldClose() const {
    return WindowShouldClose();
}

void Window::BeginFrame() {
    BeginDrawing();
}

void Window::EndFrame() {
    EndDrawing();
}