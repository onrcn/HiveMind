#pragma once
#include "DynamicTextbutton.h"
class HoneyInfo : public DynamicTextbutton
{
public:
    HoneyInfo() {};
    HoneyInfo(float x, float y, sf::String headerName, sf::Font& font, sf::Texture* texture, int scale);
    ~HoneyInfo() {};
    void Update(Account* account);
    void Render(sf::RenderTarget& window);
};

