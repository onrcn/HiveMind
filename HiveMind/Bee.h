#pragma once
#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Bee
{
protected:
	float age;
	float size;
	int health;
	void sting(); // Sting function
public:
	Bee();
	virtual ~Bee();
};

