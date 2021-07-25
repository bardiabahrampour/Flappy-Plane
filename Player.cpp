#include"Player.h"

Player::Player() {
	texture = LoadTexture(texture_path);
	sprite = { 0,0,95,35 };
	pos = { 0,0 };
	hurtbox = { pos.x , pos.y + 7, 92,20 };
}
void Player::Spawn(Vector2 &pos) {
	DrawTextureRec(texture, sprite, pos, WHITE);
	if (IsKeyDown(KEY_W)) {
		pos.y = pos.y - 10;
	}
	if (IsKeyDown(KEY_S)) {
		pos.y = pos.y + 10;
	}
	hurtbox.y = pos.y;
	hurtbox.x = pos.x;
}
Player::~Player() {
	UnloadTexture(texture);
}
