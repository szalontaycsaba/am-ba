#ifndef WINDOW_HPP_INCLUDED
#define WINDOW_HPP_INCLUDED

#include "graphics.hpp"
#include "Jatekmester.hpp"
#include<iostream>
#include<vector>

class Window
{
protected:
    const int MAX_X = 600;
    const int MAX_Y = 600;
    int posbox_x;
    int posbox_y;
    std::vector<int> seged_y;
    std::vector<int> seged_x;
    int lepesszamlalo = 1;
    const int hszam = 20;
    std::vector<Window*> window;
    std::vector<int> posboxx;
    std::vector<int> posboxy;
    std::vector<int> p1x;
    std::vector<int> p1y;
    std::vector<int> p2x;
    std::vector<int> p2y;
public:
    Window(){};
    virtual ~Window(){};
    virtual void draw(){};
    int eventloop();
};

#endif // WINDOW_HPP_INCLUDED
