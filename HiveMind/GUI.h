#pragma once
#include "dependencies.h"
#include "Account.h"
#include "Worker.h"
#include "Drone.h"
#include "Hive.h"
#include "DynamicTextbutton.h"
#include "HiveInfo.h"
#include "MoneyInfo.h"
#include "HoneyInfo.h"

class GUI
{
private:
	sf::Font font;
	sf::Texture logoTexture;
	sf::Texture infoBox;
	sf::Texture buyTexture;
	sf::Texture sellTexture;
	sf::Sprite logoSprite;
	std::vector<DynamicTextbutton> infoBoxes;
	//referances, required for some SFML functions
	sf::Font &fontRef = font;
	sf::Texture infoBoxRef = infoBox;
	sf::Texture &logoTextureRef = logoTexture;
	sf::Texture &buyTextureRef = buyTexture;
	sf::Texture& sellTextureRef = sellTexture;
public:
	GUI()
	{
		//load textures, fonts, etc.
		infoBox.loadFromFile("infobox.png");
		logoTexture.loadFromFile("logo.png");
		buyTexture.loadFromFile("buyTexture.png");
		sellTexture.loadFromFile("sellTexture.png");
		font.loadFromFile("font.ttf");
		
		//load UI elements
		LoadLogo();
		LoadHives(96, 32, "Hives", fontRef, &infoBox, 2);
		LoadHoney(144, 32, "Honey", fontRef, &infoBox, 2);
		LoadMoney(192, 32, "Money", fontRef, &infoBox, 2);

	}
	~GUI()
	{

	}
	void LoadLogo()
	{
		logoSprite.setTexture(logoTexture);
		logoSprite.setPosition(32, 16);
		logoSprite.setScale(2, 2);
	}
	void LoadBees()
	{

	}
	void LoadHives(float x, float y, sf::String headerName, sf::Font &font, sf::Texture *texture, int scale)
	{
		infoBoxes.push_back(HiveInfo(x, y, headerName, font, texture, scale));
	}
	void LoadHoney(float x, float y, sf::String headerName, sf::Font& font, sf::Texture* texture, int scale)
	{
		infoBoxes.push_back(HoneyInfo(x, y, headerName, font, texture, scale));
	}
	void LoadMoney(float x, float y, sf::String headerName, sf::Font& font, sf::Texture* texture, int scale)
	{
		infoBoxes.push_back(MoneyInfo(x, y, headerName, font, texture, scale));
	}
	void LoadClock()
	{

	}
	void Update(Account *account)
	{
		for (auto element : infoBoxes)
		{
			element.Update(account);
		}
	}
	void Render(sf::RenderWindow &window)
	{
		window.draw(logoSprite);
		for (auto element : infoBoxes)
		{
			element.Render(window);
		}
	}
};

