#include "DynamicTextbutton.h"

DynamicTextbutton::DynamicTextbutton()
{
}

DynamicTextbutton::~DynamicTextbutton()
{
}

DynamicTextbutton::DynamicTextbutton(float x, float y, float width, float height, std::string headerName, sf::Font& font)
{
	shape.setPosition(x, y);
	shape.setSize(sf::Vector2f(width, height));
	shape.setFillColor(sf::Color::Black);

	header.setPosition(x, y - 12);
	header.setFont(font);
	header.setCharacterSize(12);

	info.setPosition(x + 9, y + height / 3);
	info.setFont(font);

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
