//Example player class for top down player movement and texure loading 
#include "Player.h"
#include "stdio.h"

void Player::Load() {
    playertex = LoadTexture("../assets/textures/player.png");
}

void Player::Unload() {
    if (playertex.id != 0) {
        UnloadTexture(playertex);
        playertex.id = 0;
    }
}

void Player::Update() {
    float dt = GetFrameTime();

    if (IsKeyDown(KEY_W)) position.y -= speed * dt;
    if (IsKeyDown(KEY_S)) position.y += speed * dt;
    if (IsKeyDown(KEY_A)) position.x -= speed * dt;
    if (IsKeyDown(KEY_D)) position.x += speed * dt;
}

void Player::Draw() {
    DrawTexture(playertex, position.x - playertex.width / 2,position.y - playertex.height / 2, WHITE);
}

