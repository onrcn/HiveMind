#pragma once
#include "Button.h"

class Textbutton : public Button
{
public:
	Textbutton();
	Textbutton(float x, float y, sf::Font& font, sf::Texture* texture, int scale);
	~Textbutton();
	void Render(sf::RenderWindow &window);
	void SetInfo(sf::String someString)
	{
		info.setString(someString);
	}
	sf::String GetInfoString() 
	{
		return info.getString();
	}
protected:
	sf::Text info; //this field is static at TextButton and continuously updates at DynamicTextbutton
};

