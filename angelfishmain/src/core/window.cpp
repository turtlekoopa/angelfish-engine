/* this class is part of the core engine is what is responsible for opening a window 
you probably dont need to touch this */
#include "Window.h"
#include "../../include/raylib.h"
#include "stdio.h"
#include "af_log.h"

Window::Window(int width, int height, const char* title){
    InitWindow(width, height, title);
    af_log(AF_LOG_INFO, "window initialized (%d x %d)", width, height);
}

Window::~Window() {
    CloseWindow();
    af_log(AF_LOG_INFO, "window closed with exit code 1");
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