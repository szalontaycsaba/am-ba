#ifndef WINDOW_HPP_INCLUDED
#define WINDOW_HPP_INCLUDED

#include "graphics.hpp"
#include "Widget.hpp"
#include<iostream>
#include<vector>

class Window
{
protected:
    const int MAX_X = 600;
    const int MAX_Y = 600;
    int posbox_x;
    int posbox_y;
    int seged_y;
    int seged_x;
    int lepesszamlalo = 1;
    const int hszam = 20;
    std::vector<Window*> window;
    std::vector<int> posboxx;
    std::vector<int> posboxy;
public:
    Window(){};
    virtual ~Window(){};
    virtual void draw(){};
    int eventloop();
};

#endif // WINDOW_HPP_INCLUDED
