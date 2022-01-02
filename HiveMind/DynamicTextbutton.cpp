#include "DynamicTextbutton.h"

DynamicTextbutton::DynamicTextbutton()
{
}

DynamicTextbutton::~DynamicTextbutton()
{
}

DynamicTextbutton::DynamicTextbutton(float x, float y, sf::String headerName, sf::Font& font, sf::Texture* texture, int scale)
{
	shape.setPosition(x, y);
	shape.setTexture(texture);
	shape.setSize(sf::Vector2f(texture->getSize().x, texture->getSize().y));
	shape.setScale(scale, scale);

	header.setCharacterSize(6 * scale);
	header.setFont(font);
	header.setPosition(shape.getPosition().x + shape.getSize().x / 2 - headerName.getSize(), shape.getPosition().y - 7 * scale);
	header.setString(headerName);

	info.setString("1");
	info.setCharacterSize(6 * scale);
	info.setFont(font);
	info.setPosition(shape.getPosition().x + shape.getSize().x / 2, shape.getPosition().y + shape.getSize().y / 2);
	info.setFillColor(sf::Color::Black);
}

void DynamicTextbutton::Update(Account *account)
{
	if (header.getString() == "Hives")
	{
		info.setString(std::to_string(account->GetHive().size()));
	}
	else if (header.getString() == "Bees")
	{
		int bees = 0;
		for (auto i : account->GetHive())
		{
			bees += i.GetDrones().size();
			bees += i.GetWorkers().size();
		}
		info.setString(std::to_string(bees));
	}
	else if (header.getString() == "Honey")
	{
		info.setString(std::to_string(account->GetHoney()));
	}
	else if (header.getString() == "Money")
	{
		info.setString(std::to_string(account->GetMoney()));
	}
	else
	{
		std::cout << "please enter a proper field name to be updated or use a StaticTextbutton" << std::endl;
	}
}

void DynamicTextbutton::Render(sf::RenderWindow &window)
{
	window.draw(shape);
	window.draw(header);
	window.draw(info);
}

void DynamicTextbutton::SetScale(float scale)
{
	shape.setScale(scale, scale);
	header.setScale(scale, scale);
	info.setScale(scale, scale);
}
