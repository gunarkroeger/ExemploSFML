#include "Principal.h"

Principal::Principal()
{
    Executar();
}

Principal::~Principal()
{
    //dtor
}

void Principal::Executar()
{
    J = new Jogo(&grafico);

    ContextSettings settings;
    settings.antialiasingLevel = 8;
    //RenderWindow window(VideoMode::getFullscreenModes()[0], "ExemploSFML", Style::Fullscreen, settings);
    RenderWindow window(VideoMode(800,800), "ExemploSFML", Style::Default, settings);
    window.setKeyRepeatEnabled(false);

    Font font;
    font.loadFromFile("Carlito-Bold.ttf");


    Texture background;
    background.loadFromFile("background.png");
    background.setSmooth(true);

    Clock clock;
    Time time;

    // This "while" loop goes round and round- perhaps forever
    while (window.isOpen())
    {
        time = seconds(0);
        // The next 6 lines of code detect if the window is closed
        // And then shuts down the program
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                // Someone closed the window- bye
                window.close();
        }

        time = clock.getElapsedTime();
        if(time > seconds(1.0f/60))
        {
            clock.restart();

            window.setView(window.getDefaultView());

            Sprite sprite;
            sprite.setTexture(background);
            sprite.setOrigin(100,100);
            window.draw(sprite);
            Desenha(window);

            window.display();
        }
    }
    delete J;
    // cria o jogo e envia o personagem como parâmetro (por referência)
}

void Principal::Desenha(RenderWindow &window)
{
    J->Desenha(window);
}
