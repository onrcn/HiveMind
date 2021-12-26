#pragma once
#include "dependencies.h"
#include "Button.h"
#include "Account.h"

class Textbutton : public Button
{
public:
	Textbutton();
	Textbutton(float x, float y, std::string headerName, sf::Texture *texture, sf::Font font);
	~Textbutton();
	void Render(sf::RenderTarget* target);
protected:
	sf::Text header;
	sf::Text info;
	std::string name;
};

