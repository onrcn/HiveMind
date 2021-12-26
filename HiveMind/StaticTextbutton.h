#pragma once
#include "Textbutton.h"

class StaticTextbutton : public Textbutton
{
private:
public:
	StaticTextbutton();
	StaticTextbutton(float x, float y, std::string headerName, std::string info, sf::Texture* texture, sf::Font font);
	~StaticTextbutton();
};

