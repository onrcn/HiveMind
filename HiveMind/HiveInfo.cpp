#include "HiveInfo.h"

HiveInfo::HiveInfo(float x, float y, sf::String headerName, sf::Font& font, sf::Texture* texture, int scale)
	: DynamicTextbutton(x, y, headerName, font, texture, scale)
{
	header.setString("Hives");
}
void HiveInfo::Update(Account *account)
{
	info.setString(std::to_string(account->GetHive().size()));
}
void HiveInfo::Render(sf::RenderTarget &window) 
{
	window.draw(this->shape);
	window.draw(this->info);
	window.draw(this->header);
}