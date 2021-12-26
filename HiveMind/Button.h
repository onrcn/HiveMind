#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>


class Button
{
protected:
	sf::RectangleShape shape;
	sf::Texture texture;
public:
	Button();
	Button(float x, float y, float width, float height);
	virtual ~Button();
	void Render(sf::RenderTarget* target);
	sf::RectangleShape GetShape();
};