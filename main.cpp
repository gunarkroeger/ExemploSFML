#include <iostream>
#include <SFML/Graphics.hpp>

// This is the main C++ program- Duh!
// It is where our game starts from
int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    //sf::RenderWindow window(sf::VideoMode::getFullscreenModes()[0], "ExemploSFML", sf::Style::Fullscreen, settings);
    sf::RenderWindow window(sf::VideoMode(800,800), "ExemploSFML", sf::Style::Default, settings);
    window.setKeyRepeatEnabled(false);

    sf::Font font;
    font.loadFromFile("Carlito-Bold.ttf");


    sf::Texture background;
    background.loadFromFile("background.png");
    background.setSmooth(true);

    sf::Clock clock;
    sf::Time time;

    // This "while" loop goes round and round- perhaps forever
    while (window.isOpen())
    {
        time = sf::seconds(0);
        // The next 6 lines of code detect if the window is closed
        // And then shuts down the program
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                // Someone closed the window- bye
                window.close();
        }

        time = clock.getElapsedTime();
        if(time > sf::seconds(1.0f/60))
        {
            clock.restart();

            window.setView(window.getDefaultView());

            sf::Sprite sprite;
            sprite.setTexture(background);
            sprite.setOrigin(100,100);
            window.draw(sprite);

            window.display();
        }
    }

    return 0;
}
