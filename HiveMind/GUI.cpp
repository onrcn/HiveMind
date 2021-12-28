#include "GUI.h"

void GUI::LoadFont()
{
	font.loadFromFile("font.ttf");
}
void GUI::Logo()
{
	sf::Texture logo;
	if (!logo.loadFromFile("logo.png"))
		std::cout << "file could not load" << std::endl;
	logoSprite.setTexture(logo);
	logoSprite.setPosition(0, 0);
	logoSprite.setScale(2, 2);
}
void GUI::InfoBar()
{
	/*sf::Texture hiveTexture;
	if (!hiveTexture.loadFromFile("infoBox.png"))
		std::cout << "File could not load" << std::endl;
	hiveField.GetShape().setTexture(&hiveTexture);
	hiveField.SetScale(1);
	*/
	DynamicTextbutton hiveField(80, 16, 24, 24, "Hive", font);

	DynamicTextbutton moneyField();
}

void GUI::Render()
{

}