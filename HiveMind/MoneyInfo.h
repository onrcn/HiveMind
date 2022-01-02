#pragma once
#include "DynamicTextbutton.h"
class MoneyInfo : public DynamicTextbutton
{
public:
    MoneyInfo() {};
    MoneyInfo(float x, float y, sf::String headerName, sf::Font& font, sf::Texture* texture, int scale);
    ~MoneyInfo() {};
    void Update(Account* account);
    void Render(sf::RenderTarget& window);
};

