#pragma once
#include "dependencies.h"
#include "Account.h"
#include "I_Clickable.h"

class Button
{
protected:
	sf::RectangleShape shape;
public:
	Button();
	Button(float x, float y, sf::Texture *texture, int scale);
	virtual ~Button();
	void Render(sf::RenderWindow &window);
	void setTexture(sf::Texture* txt);
	bool MouseOver(sf::RenderWindow& window);
};