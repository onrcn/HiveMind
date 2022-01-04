#pragma once
#include "DynamicTextbutton.h"
class MoneyInfo : public DynamicTextbutton
{
public:
    MoneyInfo() {};
    MoneyInfo(float x, float y, sf::String headerName, sf::Font& font, sf::Texture* texture, int scale);
    ~MoneyInfo() {};
    virtual void Update(Account *account);
    virtual void Render(sf::RenderWindow &window);
};