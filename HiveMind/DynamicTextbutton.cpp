#include "DynamicTextbutton.h"

DynamicTextbutton::DynamicTextbutton(float x, float y, std::string headerName, sf::Texture* texture, sf::Font font)
{

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
