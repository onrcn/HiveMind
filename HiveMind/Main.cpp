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
        clock.restart();

        while (window.pollEvent(event))
        {
            // The escape key was pressed
            if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape))
                window.close();
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            case sf::Event::MouseButtonPressed:
                //gui'de buyHives objesi var ve obje button classýndan MouseOver diye bir fonksiyonu inherit ediyor ama þu an fonksiyon çalýþmýyor (emin deðilim)
                //ekrana týkladýðýmýzda program mouse pozisyonunu oyun penceresine relative olarak deðil monitördeki konumuna göre tespit ediyor
                std::cout << "Mouse click pressed at" << sf::Mouse::getPosition().x << " - " << sf::Mouse::getPosition().y << std::endl;
                std::cout << "buy button at: " << gui.buyHives.getPosition().x << " - " << gui.buyHives.getPosition().y << std::endl;
                if (gui.buyHives.MouseOver(windowRef))
                {
                    std::cout << "Mouse click pressed on buy button" << std::endl;
                    gui.buyHives.OnClick(&player);
                }
                break;
            case sf::Event::MouseMoved:
                if (gui.buyHives.MouseOver(windowRef))
                {
                    std::cout << "Mouse on buy button" << std::endl;
                }
                break;
            }
        }

        //update objects
        hives.Update(&player);
        gui.Update(&player);

        //render objects
        window.clear(bgColor);
        gui.Render(windowRef);
        window.display();
    }
    return 0;
}