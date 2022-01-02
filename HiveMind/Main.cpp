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
    window.setFramerateLimit(30);

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

    sf::Clock clock;


    // the game loop
    while (window.isOpen())
    {
        sf::Color bgColor(235, 192, 52);
        sf::Event event;

        sf::Time time = clock.getElapsedTime();
        float sec = time.asSeconds();

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            // The escape key was pressed
            if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape))
                window.close();
        }

        if (sec > 2)
        {
            player.SetMoney(player.GetMoney() + 5);
            clock.restart();
        }

        std::cout << sec << std::endl;

        //update
        hives.Update(&player);
        gui.Update(&player);

        //render
        window.clear(bgColor);
        /*window.draw(logo);220
        hives.Render(windowRef);*/
        gui.Render(windowRef);
        window.display();
    }
    return 0;
}