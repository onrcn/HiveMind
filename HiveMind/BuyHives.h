#pragma once
#include "Button.h"
class BuyHives : public Button, public I_Clickable
{
private:
	int hivePrice;
public:
	BuyHives();
	BuyHives(float x, float y, sf::Texture* texture, int scale, int price);
	void OnClick(Account* account);
	void Render(sf::RenderWindow& window);
	sf::Vector2f getPosition();
	~BuyHives() {};
};