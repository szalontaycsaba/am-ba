#ifndef JATEKMESTER_HPP_INCLUDED
#define JATEKMESTER_HPP_INCLUDED
#include "Window.hpp"

class Jatekmester : public Window
{
protected :
    int _posbbox_x ;
    int _posbbox_y ;
public :
    Jatekmester(){}
    ~Jatekmester(){}
    virtual void draw(){};
    virtual void eventHandler(genv::event ev);
};

#endif // JATEKMESTER_HPP_INCLUDED
