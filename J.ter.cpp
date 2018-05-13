#include "J.ter.hpp"
#include <iostream>
#include "graphics.hpp"

using namespace std;
using namespace genv;

void Jter::draw()
{
    gout << color(255,0,255);
    gout << move_to(MAX_X+20 , 240) << text("player 1") << move_to(MAX_X+100 , 225) << box(20,20);
    gout << color(255,255,255);
    gout << move_to(MAX_X+20 , 265) << text("player 2") <<move_to(MAX_X+100 , 250) << box(20,20);
    for (int i = 1 ; i < hszam+1 ; i++)
    {
        gout << move_to(MAX_X+20 , 200) << text("Press backspace to");
        gout << move_to(MAX_X+20 , 220) << text("start new game");
        gout << move_to((MAX_X/hszam)*i,0);
        gout << color(255,255,255);
        gout << line_to((MAX_X/hszam)*i,MAX_Y);
        gout << move_to(0,(MAX_Y/hszam)*i);
        gout << line_to(MAX_X,(MAX_Y/hszam)*i);
    }
}
