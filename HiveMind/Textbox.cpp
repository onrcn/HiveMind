#include "Textbox.h"


Textbox::Textbox()
{

}

Textbox::~Textbox()
{

}

void Textbox::Update(sf::Time dt)
{

}

void Textbox::Render(sf::RenderWindow& window)
{
	window.draw(button);
	window.draw(text);
}