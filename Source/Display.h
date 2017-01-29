#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED

#include <SFML/Graphics.hpp>

namespace Display
{
    // Initialize window
    void init();

    // Clear window
    void clear();
    // Update/display window
    void display();

    void checkWindowEvents();

    // If window is open or not
    bool isOpen();

    constexpr int HEIGHT    = 720;
    constexpr int WIDTH     = 1280;
}

#endif // DISPLAY_H_INCLUDED
