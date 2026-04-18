

#include "Window.h"
#include "../include/raylib.h"
#include "Player.h"
#include "stdio.h"
#include "angelfish_splash.h"

int main() {
    angelfish_print_splash();
    Window window(800,600, "angelfish dev build");
    ChangeDirectory(GetApplicationDirectory());
    Player player;
    player.position = {400, 300};
    player.Load();

    while (!window.ShouldClose())
    {
        player.Update();

        window.BeginFrame();
        ClearBackground(WHITE);
        player.Draw();
        window.EndFrame();
    }

    player.Unload();
    return 0;
}