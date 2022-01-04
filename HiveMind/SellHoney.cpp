#include "SellHoney.h"

SellHoney::SellHoney()
{
	std::cout << "use overloaded constructor instead" << std::endl;
}

SellHoney::SellHoney(float x, float y, sf::Texture* texture, int scale, int price) : Button(x, y, texture, scale)
{
	honeyPrice = price;
}


void SellHoney::OnClick(Account* account)
{
	if (account->GetHoney() >= 50)
	{
		account->SetMoney(account->GetMoney() + honeyPrice);
		account->SetHoney(account->GetHoney() - 50);
	}
}


void SellHoney::Render(sf::RenderWindow& window)
{
	window.draw(shape);
}

sf::Vector2f SellHoney::getPosition()
{
	return this->shape.getPosition();
}
