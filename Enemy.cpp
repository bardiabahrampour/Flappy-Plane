#include "Enemy.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>
Enemy::Enemy() {
	texture = LoadTexture(texture_path);
	sprite = { 0,0,40,20 };
	pos.x = 1000;
	pos.y = GetRandomValue(10, 700);
	hitbox = { pos.x,pos.y,40,20 };
}
void Enemy::Spawn() {
	DrawTextureRec(texture, sprite, pos, WHITE);
	pos.x = pos.x - 15;
	if (pos.x <= -50) {
		pos.x = 1000;
		pos.y = GetRandomValue(10, 700);
	}
	hitbox.x = pos.x;
	hitbox.y = pos.y;
}
Enemy::~Enemy(){
	UnloadTexture(texture);
}