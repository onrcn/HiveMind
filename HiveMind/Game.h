#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include "Button.h"
#include "Textbutton.h"
#include <iostream>

class Game {
public:
	// Variables
	sf::RenderWindow* window;
	sf::Event ev;
	sf::VideoMode videoMode;

	// Game objects
	Textbutton example;
	sf::Texture logo;
	sf::Sprite logoSprite;
	sf::Texture infoBox;
	sf::Font infoFont;

	// Private Functions
	void initializeWindow();
	void initializeVariables();
public:
	// Public Functions
	const bool windowOpen() const; // check if the game is running
	void Update();
	void Render();
	void pollEvents();
	// Constructors and destructors
	Game();
	virtual ~Game();

};