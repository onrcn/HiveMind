#include "dependencies.h"
#include "GUI.h"
#include "Button.h"
#include "Account.h"
#include "DynamicTextbutton.h"
#include "Textbutton.h"
#include "Hive.h"

int main(int argc, char** argv)
{
    //initialize window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Beehive Management!");
    
    //init variables here
    Account player(100, 100);
    GUI gui;
    // the game loop
    while (window.isOpen())
    {
        sf::Color bgColor(235, 192, 52);
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
        window.clear(bgColor);
        window.display();
    }


    return 0;
}