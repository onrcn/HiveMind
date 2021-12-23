#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Button
{
public:
	Button();
	~Button();
	void Update(sf::Time dt);
	void Render(sf::RenderWindow &window);
protected:
	sf::RectangleShape button;
};

