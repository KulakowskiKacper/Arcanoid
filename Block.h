#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Block : public sf::Drawable
{
public:
	Block(float t_X, float t_Y, float width, float height);
	Block() = delete;
	~Block() = default;

	void update();
	Vector2f getPosition();

	float left();
	float right();
	float top();
	float bottom();

	bool isDestroyed();
	void destroy();
	Vector2f getSize();

private:
	virtual void draw(RenderTarget& target, RenderStates states) const override;
	RectangleShape shape;
	bool destroyed{ false };
};

