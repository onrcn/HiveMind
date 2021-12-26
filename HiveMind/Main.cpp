#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include "Button.h"

int main(int argc, char** argv)
{
    //initialize window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Beehive Management!");
    
    //init variables here
    sf::Texture texture;
    if (!texture.loadFromFile("logo.png"))
        std::cout << "file could not load" << std::endl;
    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setPosition(400, 300);

    // the game loop
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            // The escape key was pressed
            if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape))
                window.close();
        }
        sf::Clock clock;
        sf::Time dt = sf::seconds(clock.getElapsedTime().asSeconds());


        //render
        window.clear();
        window.draw(sprite);
        window.display();
    }


    return 0;
}