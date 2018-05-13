#ifndef JATEKMESTER_HPP_INCLUDED
#define JATEKMESTER_HPP_INCLUDED
#include "Window.hpp"
#include<vector>

class Jatekmester
{
protected :
    int pw = 1;
public :
    Jatekmester(){}
    ~Jatekmester(){}
    virtual void draw(){};
    bool ellenorzo(std::vector<int> _myvec,std::vector<int>_myvec2);
};

#endif // JATEKMESTER_HPP_INCLUDED
