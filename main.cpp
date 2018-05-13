#include "Window.hpp"

int main()
{
    Window * w = new Window;
    w->eventloop();
    delete w;
}

