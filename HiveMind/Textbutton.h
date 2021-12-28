#pragma once
#include "Button.h"

class Textbutton : public Button
{
public:
	Textbutton();
	Textbutton(float x, float y, std::string headerName, sf::Texture *texture, sf::Font font);
	~Textbutton();
	void Render(sf::RenderTarget *window);
protected:
	sf::Text header;
	sf::Text info; //this field is static at StaticText and continuously updates at DynamicText
};

