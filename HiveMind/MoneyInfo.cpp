#include "MoneyInfo.h"

MoneyInfo::MoneyInfo(float x, float y, sf::String headerName, sf::Font& font, sf::Texture* texture, int scale)
	: DynamicTextbutton(x, y, headerName, font, texture, scale)
{
	header.setString("Money");
}

void MoneyInfo::Update(Account* account)
{
	info.setString(std::to_string((int)account->GetMoney()));
}

void MoneyInfo::Render(sf::RenderTarget& window)
{
	window.draw(this->shape);
	window.draw(this->info);
	window.draw(this->header);
}