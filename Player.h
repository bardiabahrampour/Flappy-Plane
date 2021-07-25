#include <raylib.h>
class Player {
private:
	const char* texture_path{ "data/player.png" };
	Texture texture{ };
public:
	Rectangle hurtbox{ };
	Rectangle sprite{ };
	Vector2 pos{ };
	Player();
	~Player();
	void Spawn(Vector2 &pos);
};