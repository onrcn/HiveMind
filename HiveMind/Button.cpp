#include "Button.h"

//load textures in game.cpp and generate a texture
//dont forget to set the texture in game.cpp

Button::Button()
{
	
}

Button::Button(float x, float y, float width, float height)
{
	this->shape.setPosition(sf::Vector2f(x, y));
	this->shape.setSize(sf::Vector2f(width, height));

	std::cout << "base constructor called" << std::endl;
}

Button::~Button()
{
	
}

void Button::Render(sf::RenderTarget* target)
{
	target->draw(this->shape);
}

sf::RectangleShape Button::GetShape()
{
	return shape;
}

