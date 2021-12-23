#pragma once
#include "Button.h"

class Textbox : public Button
{
public:
	Textbox();
	~Textbox();
	void Update(sf::Time dt);
	void Render(sf::RenderWindow& window);
private:
	sf::Text text;
	sf::Color color;
};

#pragma once
