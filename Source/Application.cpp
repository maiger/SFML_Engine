#include "Application.h"

#include "Display.h"

Application::Application()
{
    Display::init();
}

void Application::runMainLoop()
{
    while(Display::isOpen())
    {
        Display::checkWindowEvents();

        Display::clear();

        // input
        // update
        // draw

        Display::display();
    }
}
