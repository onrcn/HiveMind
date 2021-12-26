#include "StaticTextbutton.h"

StaticTextbutton::StaticTextbutton()
{
}

StaticTextbutton::StaticTextbutton(float x, float y, std::string headerName, std::string info, sf::Texture* texture, sf::Font font)
{
	this->info.setString(info);
}

StaticTextbutton::~StaticTextbutton()
{
}
