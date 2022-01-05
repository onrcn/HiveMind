#pragma once
#include "DynamicTextbutton.h"

class BeeInfo : public DynamicTextbutton
{
public:
    int totalBee;
    BeeInfo() {};
    BeeInfo(float x, float y, sf::String headerName, sf::Font& font, sf::Texture* texture, int scale);
    ~BeeInfo() {};
    virtual void Update(Account* account);
    virtual void Render(sf::RenderWindow& window);
};

