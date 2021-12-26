#include "Textbutton.h"
#include "Account.h"

Textbutton::Textbutton()
{
	
}

Textbutton::Textbutton(float x, float y, std::string headerName, sf::Texture* texture, sf::Font font)
{

	this->shape.setPosition(sf::Vector2f(x, y));
	this->shape.setTexture(texture);
	this->shape.setSize(static_cast<sf::Vector2f>(texture->getSize()));

	header.setPosition(shape.getPosition().x, shape.getPosition().y - 2);
	info.setPosition(shape.getPosition().x, shape.getPosition().y + shape.getSize().y / 2);
	header.setFont(font);
	info.setFont(font); 
	header.setString(headerName);
}

Textbutton::~Textbutton()
{
	
}


void Textbutton::Render(sf::RenderTarget* target)
{
	target->draw(this->shape);
	target->draw(this->header);
	target->draw(this->info);
}
