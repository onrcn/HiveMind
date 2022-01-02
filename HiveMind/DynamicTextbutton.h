#pragma once
#include "Textbutton.h"

class DynamicTextbutton : public Textbutton
{
protected:
	sf::Text header;
public:
	DynamicTextbutton();
	~DynamicTextbutton();
	DynamicTextbutton(float x, float y, sf::String headerName, sf::Font& font, sf::Texture* texture, int scale);
	virtual void Update(Account *account);
	virtual void Render(sf::RenderWindow &window);
	void SetScale(float scale);
};

