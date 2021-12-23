#pragma once
#include "Button.h"
class ActionButton : public Button
{
public:
	void OnHover();
	virtual void OnClick();
	void Update(sf::Time dt);
	void Render(sf::RenderWindow& window);
private:
};



