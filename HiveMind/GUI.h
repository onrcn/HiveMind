#pragma once
#include "dependencies.h"
#include "Account.h"
#include "Hive.h"
#include "Textbutton.h"
#include "DynamicTextbutton.h"
#include "HiveInfo.h"
#include "MoneyInfo.h"
#include "HoneyInfo.h"
#include "BuyHives.h"
#include "SellHoney.h"


class GUI
{
private:
	sf::Font font;
	sf::Texture logoTexture;
	sf::Texture infoBox;
	sf::Texture buyTexture;
	sf::Texture sellTexture;
	sf::Sprite logoSprite;
	std::vector<DynamicTextbutton*> infoBoxes;
	Textbutton market[3][2];
	Textbutton actionsBar;

	int honeyPrice;
	int hivePrice;
	//referances, required for some SFML functions
	sf::Font &fontRef = font;
	sf::Texture infoBoxRef = infoBox;
	sf::Texture &logoTextureRef = logoTexture;
	sf::Texture &buyTextureRef = buyTexture;
	sf::Texture& sellTextureRef = sellTexture;
public:
	BuyHives buyHives;
	SellHoney sellHoney;
	GUI()
	{
		hivePrice = 200; // Settings default hive price to 200
		honeyPrice = 50; // Setting honey price to 50
		// load textures, fonts, etc.
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
		LoadMarket(240, 200, fontRef, &infoBox, 4);
	}
	~GUI()
	{
		for (auto element : infoBoxes)
		{
			delete[] element;
		}
	}
	void LoadLogo()
	{
		logoSprite.setTexture(logoTexture);
		logoSprite.setPosition(32, 16);
		logoSprite.setScale(2, 2);
	}
	void LoadHives(float x, float y, sf::String headerName, sf::Font &font, sf::Texture *texture, int scale)
	{
		infoBoxes.push_back(new HiveInfo(x, y, headerName, font, texture, scale));
	}
	void LoadHoney(float x, float y, sf::String headerName, sf::Font& font, sf::Texture* texture, int scale)
	{
		infoBoxes.push_back(new HoneyInfo(x, y, headerName, font, texture, scale));
	}
	void LoadMoney(float x, float y, sf::String headerName, sf::Font& font, sf::Texture* texture, int scale)
	{
		infoBoxes.push_back(new MoneyInfo(x, y, headerName, font, texture, scale));
	}
	void LoadMarket(float x, float y, sf::Font& font, sf::Texture* texture, int scale)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				market[i][j] = Textbutton(x + j * texture->getSize().x * scale, y + i * texture->getSize().y * scale, font, texture, scale);
			}
		}
		market[0][0].SetInfo("Product");
		market[0][1].SetInfo("Price");
		market[1][0].SetInfo("Hives");
		market[1][1].SetInfo(std::to_string(hivePrice));
		market[2][0].SetInfo("Honey");
		market[2][1].SetInfo(std::to_string(honeyPrice));
		actionsBar = Textbutton(432, 200, font, texture, scale);
		actionsBar.SetInfo("Action");
		buyHives = BuyHives(432, 248, &buyTextureRef, scale, hivePrice);
		sellHoney = SellHoney(432, 296, &sellTextureRef, scale, honeyPrice);
	}

	void Update(Account *account)
	{
		for (auto element : infoBoxes)
		{
			element->Update(account);
		}
	}
	void Render(sf::RenderWindow &window)
	{
		window.draw(logoSprite);
		for (auto element : infoBoxes)
		{
			element->Render(window);
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				market[i][j].Render(window);
			}
		}
		actionsBar.Render(window);
		buyHives.Render(window);
		sellHoney.Render(window);
	}
};

