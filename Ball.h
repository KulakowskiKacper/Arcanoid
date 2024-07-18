#include <SFML/Graphics.hpp>
using namespace sf;

#pragma once
class Ball : public sf::Drawable
{
public:
	Ball(float t_X, float t_Y);
	Ball() = delete;
	~Ball() = default;

	void update();

	void moveUp();
	void moveDown();
	void moveRight();
	void moveLeft();

	Vector2f getPosition();

	float left();
	float right();
	float top();
	float bottom();
private:
	CircleShape shape;
	const float ballRadius {10.0f };
	const float ballVelocity { 3.0f };
	Vector2f velocity { ballVelocity, ballVelocity };
	void draw(RenderTarget& target, RenderStates state) const override;
};

