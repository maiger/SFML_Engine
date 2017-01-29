#include "Display.h"

#include <memory>

namespace Display
{
    // When an object of type sf::renderWindow is created, it opens a window
    // immediately. This sometimes causes problems, so we use unique pointer
    // to better control when the renderWindow is initialized.
    std::unique_ptr<sf::RenderWindow> window;

    void init()
    {
        window = std::make_unique<sf::RenderWindow>(sf::VideoMode(WIDTH, HEIGHT), "Window");
    }

    void clear()
    {
        window->clear();
    }

    void display()
    {
        window->display();
    }

    void checkWindowEvents()
    {
        sf::Event e;

        while(window->pollEvent(e))
        {
            if(e.type == sf::Event::Closed)
            {
                window->close();
            }
        }
    }

    bool isOpen()
    {
        return window->isOpen();
    }
}
