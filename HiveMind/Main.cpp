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
    srand(time(NULL));
    // initialize window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Beehive Management!", sf::Style::Fullscreen);
    sf::RenderWindow& windowRef = window;
    window.setFramerateLimit(30);

    // init variables here
    Account player(50, 50);
    
    // load textures here
    sf::Texture infoboxTexture;
    infoboxTexture.loadFromFile("infobox.png");
    sf::Texture logoTexture;
    logoTexture.loadFromFile("logo.png");
    // Loading the pixel font
    sf::Font font;
    font.loadFromFile("font.ttf");
    
    // Using the gui class
    GUI gui;
    sf::Sprite logo;
    logo.setTexture(logoTexture);
    logo.setPosition(32, 16);
    logo.setScale(2, 2);
    MoneyInfo hives(96, 32, "foo", font, &infoboxTexture, 3);

    sf::Clock clock; // Clock variable to keep the time

    // the game loop
    while (window.isOpen())
    {
        sf::Color bgColor(163, 166, 67);
        sf::Event event;

        sf::Time time = clock.getElapsedTime();
        float dt = time.asSeconds();
        clock.restart();

        while (window.pollEvent(event)) // The game loop
        {
            switch (event.type) // Her event için durumlarý kontrol et
            {
            case sf::Event::KeyPressed:
                if (event.key.code == sf::Keyboard::Escape) // Kapamak icin ESC tusunu kullanmak
                    window.close();
                break;
            case sf::Event::Closed: // Kapamak icin carpi butonuna basin
                window.close();
                break;
            case sf::Event::MouseButtonPressed:
                std::cout << "Mouse click pressed at " << sf::Mouse::getPosition().x << " - " << sf::Mouse::getPosition().y << std::endl;
                std::cout << "Buy button at: " << gui.buyHives.getPosition().x << " - " << gui.buyHives.getPosition().y << std::endl;
                if (gui.buyHives.MouseOver(windowRef)) // Buy buttonuna tiklandiginda satin alma islemini gerceklestir.
                {
                    std::cout << "Mouse click pressed on buy button" << std::endl;
                    gui.buyHives.OnClick(&player);
                }
                if (gui.sellHoney.MouseOver(windowRef)) // Sell buttonuna tiklandiginda satma islemini gerceklestir.
                {
                    std::cout << "Mouse click pressed on sell button" << std::endl;
                    gui.sellHoney.OnClick(&player);
                }
                break;
            case sf::Event::MouseMoved:
                if (gui.buyHives.MouseOver(windowRef)) // debug icin 
                {
                    std::cout << "Mouse on buy button" << std::endl;
                }
                break;
            }
        }

        //update objects
        hives.Update(&player);
        player.Update(dt);
        gui.Update(&player);

        //render objects
        window.clear(bgColor);
        gui.Render(windowRef);
        window.display();
    }
    return 0;
}