#include "BeeInfo.h"

BeeInfo::BeeInfo(float x, float y, sf::String headerName, sf::Font& font, sf::Texture* texture, int scale)
	: DynamicTextbutton(x, y, headerName, font, texture, scale)
{
	totalBee = 0;
	header.setString("Bees");
}
void BeeInfo::Update(Account* account)
{
	for (auto i : account->GetHive())
	{
		totalBee += (i.getWorkers() + i.getDrones());
	}
	info.setString(std::to_string(totalBee));
}
void BeeInfo::Render(sf::RenderWindow& window)
{
	window.draw(this->shape);
	window.draw(this->info);
	window.draw(this->header);
}