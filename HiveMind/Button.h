#pragma once
#include "dependencies.h"
#include "Account.h"

class Button
{
protected:
	sf::RectangleShape shape;
public:
	Button();
	Button(float x, float y, float width, float height, sf::Texture *texture);
	Button(float x, float y, float width, float height);
	virtual ~Button();
	void Render(sf::RenderTarget &window);
	void setTexture(sf::Texture* txt);
};