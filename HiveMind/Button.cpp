#include "Button.h"


Button::Button(float x, float y, float width, float height)
{
	this->shape.setPosition(sf::Vector2f(x, y));
	this->shape.setSize(sf::Vector2f(width, height));
}

Button::~Button()
{

}

void Button::render(sf::RenderTarget* target)
{
	target->draw(this->shape);
}

