#pragma once
#include "dependencies.h"

class Button
{
protected:
	sf::RectangleShape shape;
public:
	Button();
	Button(float x, float y, float width, float height);
	virtual ~Button();
	void Render(sf::RenderTarget &window);
	sf::RectangleShape GetShape();
};