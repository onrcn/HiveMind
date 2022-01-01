#pragma once
#include "DynamicTextbutton.h"
class HiveInfo : public DynamicTextbutton
{
public:
    HiveInfo() {};
    HiveInfo(float x, float y, sf::String headerName, sf::Font& font, sf::Texture* texture, int scale);
    ~HiveInfo();
    void Update(Account* account);
    void Render(sf::RenderTarget &window);
};

