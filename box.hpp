#ifndef BOX_HPP_INCLUDED
#define BOX_HPP_INCLUDED
#include "Window.hpp"

class Box : public Window
{
protected :
int _posbbox_x;
int _posbbox_y;
int click = 0;
public :
    Box(int _posbbox_x ,int  _posbbox_y,int _click);
    ~Box(){}
    void draw();
};

#endif // BOX_HPP_INCLUDED
