#pragma once
#include "Button.h"
class Textbutton : public Button
{
public:
	Textbutton();
	Textbutton(float x, float y, float width, float height, std::string headerName, sf::Font font);
	~Textbutton();
	void Update(sf::Time dt);
	void Render(sf::RenderTarget* target);
private:
	sf::Text header;
	sf::Text info;
};

