#include "ActionButton.h"

void ActionButton::OnHover()
{
	if (sf::Mouse::getPosition().x < button.getPosition().x + button.getSize().x
		&& sf::Mouse::getPosition().x > button.getPosition().x
		&& sf::Mouse::getPosition().y < button.getPosition().y + button.getSize().y
		&& sf::Mouse::getPosition().y > button.getPosition().y)
	{
		//button.setTexture(hoveredTexture);
	}
	else
	{
		//button.setTexture(originalTexture);
	}
}

void ActionButton::OnClick()
{

}

void ActionButton::Update(sf::Time dt)
{

}

void ActionButton::Render(sf::RenderWindow& window)
{
	window.draw(button);
}