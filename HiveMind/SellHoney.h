#pragma once
#include "Button.h"
class SellHoney : public Button, public I_Clickable
{
private:
	int honeyPrice;
public:
	SellHoney();
	SellHoney(float x, float y, sf::Texture* texture, int scale, int price);
	void OnClick(Account* account);
	void Render(sf::RenderWindow& window);
	sf::Vector2f getPosition();
	~SellHoney() {};
};