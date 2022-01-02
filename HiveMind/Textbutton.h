#pragma once
#include "Button.h"

class Textbutton : public Button
{
public:
	Textbutton();
	Textbutton(float x, float y, sf::Texture* texture, sf::Font font, sf::String infoString);
	~Textbutton();
	void Render(sf::RenderTarget *window);
	void SetInfo(sf::String someString)
	{
		info.setString(someString);
	}
	sf::String GetInfo() 
	{
		return info.getString();
	}
protected:
	sf::Text info; //this field is static at TextButton and continuously updates at DynamicTextbutton
};

