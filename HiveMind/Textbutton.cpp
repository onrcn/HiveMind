#include "Textbutton.h"
#include "Account.h"

Textbutton::Textbutton()
{
	
}

Textbutton::Textbutton(float x, float y, sf::Texture* texture, sf::Font font, sf::String infoString)
{
	this->shape.setPosition(sf::Vector2f(x, y));
	this->shape.setTexture(texture);
	this->shape.setSize(static_cast<sf::Vector2f>(texture->getSize()));

	info.setPosition(shape.getPosition().x, shape.getPosition().y + shape.getSize().y / 2);
	info.setFont(font); 
	info.setString(infoString);
	info.setCharacterSize(12);
}

Textbutton::~Textbutton()
{
	
}


void Textbutton::Render(sf::RenderTarget *window)
{
	window->draw(this->shape);
	window->draw(this->info);
}
