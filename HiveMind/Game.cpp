#include "Game.h"


// Private Functions 
void Game::initializeVariables()
{
    this->window = nullptr;
}

void Game::initializeWindow()
{
    this->videoMode.height = 600;
    this->videoMode.width = 800;
    this->window = new sf::RenderWindow(this->videoMode, "Hive Mind", sf::Style::Titlebar | sf::Style::Close);
}

// Public Functions
const bool Game::windowOpen() const
{
    return this->window->isOpen(); // check if the game is running
}

void Game::pollEvents()
{
    while (this->window->pollEvent(this->ev))
    {
        switch (this->ev.type)
        {
        case sf::Event::Closed:
            this->window->close();
            break;
        case sf::Event::KeyPressed:
            if (this->ev.key.code == sf::Keyboard::Escape)
            {
                this->window->close();
            }
            break;
        default:
            break;
        }
    }
}

void Game::Update()
{
    window->setFramerateLimit(60);
    window->setVerticalSyncEnabled(false);
    
    sf::Clock clock;
    sf::Time dt = sf::seconds(clock.getElapsedTime().asSeconds());
    clock.restart().asSeconds();
    

    this->pollEvents();
}

void Game::Render()
{
    /*
      Renders the game objects.
    */

    this->window->clear(sf::Color(0, 0, 0, 255));

    // Draw game objects
    this->window->display();

}

// Constructor and destructors
Game::Game()
{
    this->initializeVariables();
    this->initializeWindow();
}

Game::~Game()
{
    delete this->window;
}