#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Game {
private:
	// Variables
	sf::RenderWindow* window;
	sf::Event ev;
	sf::VideoMode videoMode;

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