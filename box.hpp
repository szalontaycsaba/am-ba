#ifndef BOX_HPP_INCLUDED
#define BOX_HPP_INCLUDED
#include "jatekmester.hpp"

class Box : public Jatekmester
{
protected :
int _posbbox_x;
int _posbbox_y;
int click = 0;
public :
    Box(int _posbbox_x ,int  _posbbox_y,int _click);
    ~Box(){}
    void draw();
    void eventHandler(genv::event ev);
};

#endif // BOX_HPP_INCLUDED
