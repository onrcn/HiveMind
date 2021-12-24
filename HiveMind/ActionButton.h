#pragma once

#include "Button.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class ActionButton : public Button
{
public:
	void onClick();
	void onHover();
};