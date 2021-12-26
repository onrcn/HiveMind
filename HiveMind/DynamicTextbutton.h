#pragma once
#include "Textbutton.h"
class DynamicTextbutton : public Textbutton
{
private:
public:
	DynamicTextbutton();
	~DynamicTextbutton();
	DynamicTextbutton(float x, float y, std::string headerName, sf::Texture* texture, sf::Font font);
	void Update(Account *account);
};

