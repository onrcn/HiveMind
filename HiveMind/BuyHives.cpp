#include "BuyHives.h"

BuyHives::BuyHives()
{
	std::cout << "use overloaded constructor instead" << std::endl;
}

BuyHives::BuyHives(float x, float y, sf::Texture* texture, int scale, int price) : Button(x, y, texture, scale)
{
	hivePrice = price;
	std::cout << "Buy button for hives created" << std::endl;
}

void BuyHives::OnClick(Account *account)
{
	if (account->GetMoney() >= hivePrice)
	{
		account->SetMoney(account->GetMoney() - hivePrice);
		account->pushHive(Hive());
	}
}

void BuyHives::Render(sf::RenderWindow& window)
{
	window.draw(shape);
}

sf::Vector2f BuyHives::getPosition()
{
	return this->shape.getPosition();
}