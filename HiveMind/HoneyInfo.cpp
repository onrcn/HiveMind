#include "HoneyInfo.h"


HoneyInfo::HoneyInfo(float x, float y, sf::String headerName, sf::Font& font, sf::Texture* texture, int scale)
	: DynamicTextbutton(x, y, headerName, font, texture, scale)
{
	header.setString("Honey");
}
void HoneyInfo::Update(Account* account)
{
	info.setString(std::to_string(account->GetHoney()));
}
void HoneyInfo::Render(sf::RenderWindow &window)
{
	window.draw(this->shape);
	window.draw(this->info);
	window.draw(this->header);
}
