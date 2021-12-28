#pragma once
#include "Textbutton.h"
#include "Account.h"

class DynamicTextbutton : public Textbutton
{
private:
public:
	DynamicTextbutton();
	~DynamicTextbutton();
	DynamicTextbutton(float x, float y, float width, float height, std::string headerName, sf::Font &font);
	void Update(Account *account);
	void Render(sf::RenderWindow &window);
	void SetScale(float scale);
};

