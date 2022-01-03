#include "Textbutton.h"
#include "Account.h"

Textbutton::Textbutton()
{
	
}

Textbutton::Textbutton(float x, float y, sf::Font& font, sf::Texture* texture, int scale)
{
	shape.setPosition(x, y);
	shape.setTexture(texture);
	shape.setSize(sf::Vector2f(texture->getSize().x, texture->getSize().y));
	shape.setScale(scale, scale);

	info.setCharacterSize(4 * scale);
	info.setFont(font);
	info.setPosition(shape.getPosition().x + shape.getSize().x / 2, shape.getPosition().y + shape.getSize().y / 2);
	info.setFillColor(sf::Color::Black);
}

Textbutton::~Textbutton()
{
	
}


void Textbutton::Render(sf::RenderWindow &window)
{
	window.draw(this->shape);
	window.draw(this->info);
}
