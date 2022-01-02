#include "dependencies.h"
#include "GUI.h"
#include "Button.h"
#include "Account.h"
#include "DynamicTextbutton.h"
#include "Textbutton.h"
#include "Hive.h"
#include "HiveInfo.h"
#include "HoneyInfo.h"
#include "MoneyInfo.h"

int main(int argc, char** argv)
{
    //initialize window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Beehive Management!");
    sf::RenderWindow& windowRef = window;
    
    //init variables here
    Account player(100, 100);
    
    //load textures here
    sf::Texture infoboxTexture;
    infoboxTexture.loadFromFile("infobox.png");
    sf::Texture logoTexture;
    logoTexture.loadFromFile("logo.png");

    sf::Font font;
    font.loadFromFile("font.ttf");
    
    GUI gui;
    sf::Sprite logo;
    logo.setTexture(logoTexture);
    logo.setPosition(32, 16);
    logo.setScale(2, 2);
    MoneyInfo hives(96, 32, "foo", font, &infoboxTexture, 3);
    
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

        //update
        hives.Update(&player);
        gui.Update(&player);
        
        sf::Clock clock;
        float dt = clock.getElapsedTime().asSeconds();

        //render
        window.clear(bgColor);
        /*window.draw(logo);220
        hives.Render(windowRef);*/
        gui.Render(windowRef);
        window.display();
    }
    return 0;
}