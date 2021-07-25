#pragma once
#include <raylib.h>
class Enemy
{
private:
	Vector2 pos{ };
	const char* texture_path{"data/enemy.png"};
	Texture texture{};
public:
	Rectangle sprite{ };
	Rectangle hitbox{ };
	Enemy();
	~Enemy();
	void Spawn();
};

