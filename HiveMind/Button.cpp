#include "Button.h"

//load textures in game.cpp and generate a texture
//dont forget to set the texture in game.cpp

Button::Button()
{
	
}

Button::Button(float x, float y, sf::Texture *texture, int scale)
{
	shape.setPosition(sf::Vector2f(x, y));
	shape.setTexture(texture);
	shape.setSize(sf::Vector2f(texture->getSize().x, texture->getSize().y));
	shape.setScale(scale, scale);

	std::cout << "base constructor called" << std::endl;
}

Button::~Button()
{
	
}

void Button::Render(sf::RenderWindow &window)
{
	window.draw(this->shape);
}

void Button::setTexture(sf::Texture* txt)
{
	shape.setTexture(txt);
}

bool Button::MouseOver(sf::RenderWindow& window)
{
	float mouseX = sf::Mouse::getPosition(window).x;
	float mouseY = sf::Mouse::getPosition(window).y;

	float shapeX = shape.getPosition().x;
	float shapeY = shape.getPosition().y;

	float shapeWidthX = shape.getPosition().x + shape.getSize().x;
	float shapeHeightY = shape.getPosition().y + shape.getSize().y;
	//AABB collision detection
	if (mouseX > shapeX && mouseX < shapeWidthX && mouseY > shapeY && mouseY < shapeHeightY)
	{
		return true;
	}
	return false;
}
