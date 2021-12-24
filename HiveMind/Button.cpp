#include "Button.h"

//load textures in game.cpp and generate a texture
//if member attribute sf::Texture *texture is null, no texture will be rendered

Button::Button()
{
	texture = NULL;
}

Button::Button(float x, float y, float width, float height, sf::Texture *texture)
{
	this->shape.setPosition(sf::Vector2f(x, y));
	this->shape.setSize(sf::Vector2f(width, height));
	this->shape.setTexture(this->texture);

	std::cout << "base constructor called" << std::endl;
}

Button::~Button()
{
	delete texture;
}

void Button::Render(sf::RenderTarget* target)
{
	target->draw(this->shape);
}

sf::RectangleShape Button::GetShape()
{
	return shape;
}

