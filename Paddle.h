#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class Paddle : public sf::Drawable
{
public:
	Paddle(float t_X, float t_Y);
	Paddle() = delete;
	~Paddle() = default;

	void update();
	float left();
	float right();
	float top();
	float bottom();

	Vector2f getPosition();

private:
	void draw(RenderTarget& target, RenderStates state) const override;
	RectangleShape shape;
	const float paddleWidth{ 80.0f };
	const float paddleHeight{ 20.0f };
	const float paddleVelocity{ 7.0f };
	Vector2f velocity{ paddleVelocity, 0.f };

};

