#include "dependencies.h"
#include "GUI.h"
#include "Button.h"
#include "Account.h"
#include "DynamicTextbutton.h"
#include "Textbutton.h"
#include "Hive.h"
#include "HiveInfo.h"

int main(int argc, char** argv)
{
    //initialize window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Beehive Management!");
    sf::RenderWindow& windowRef = window;
    
    //init variables here
    Account player(100, 100);
    sf::Texture texture;
    texture.loadFromFile("infobox.png");
    sf::Font font;
    font.loadFromFile("font.ttf");
    GUI gui;
    Button button(32, 32, 32, 32);
    button.setTexture(&texture);
    HiveInfo hives(64, 32, "foo", font, &texture, 3);
    // the game loop
    while (window.isOpen())
    {
        sf::Color bgColor(235, 192, 52);
        sf::Event event;
        hives.Update(&player);
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
        button.Render(windowRef);
        hives.Render(windowRef);
        window.display();
    }

    
    return 0;
}