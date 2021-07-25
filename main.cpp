#include "Enemy.h"
#include "Player.h"
#include <iostream>
bool is_dead{};
int main(int argc, char* argv[]) {
	InitWindow(800, 600, "WHYYYYYYYYYYYYY");
	SetTargetFPS(60);
	Player player;
	Enemy enemy;
	int fps{0};
	while (!WindowShouldClose()) {
		if (CheckCollisionRecs(enemy.hitbox, player.hurtbox)) {
			player.~Player();
			is_dead = true;
		}
		BeginDrawing();
		ClearBackground(BLACK);
		fps++;
		if (!is_dead) {
			player.Spawn(player.pos);
			if (fps % 300 == 0) {
				enemy.speed = enemy.speed + 2;
			}
		}
		else {
			DrawText("Game Over!",0, 0, 120, RED);
		}
		enemy.Spawn();
		EndDrawing();
	}
	CloseWindow();
	return 0;
}