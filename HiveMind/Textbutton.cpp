#include "Textbutton.h"

Textbutton::Textbutton()
{
	
}

Textbutton::Textbutton(float x, float y, float width, float height, std::string headerName, sf::Font font)
{
	this->shape.setPosition(sf::Vector2f(x, y));
	this->shape.setSize(sf::Vector2f(width, height));
	this->shape.setFillColor(sf::Color(0, 255, 0, 255));

	header.setPosition(shape.getPosition().x, shape.getPosition().y - 2);
	info.setPosition(shape.getPosition().x, shape.getPosition().y + shape.getSize().y / 2);
	header.setFont(font);
	info.setFont(font);
	header.setString(headerName);
	info.setString("default");
}

Textbutton::~Textbutton()
{
	
}

void Textbutton::Update(sf::Time dt)
{
	//update sf::Text info from Hive and money classes
}

void Textbutton::Render(sf::RenderTarget* target)
{
	target->draw(this->shape);
	target->draw(this->header);
	target->draw(this->info);
}
