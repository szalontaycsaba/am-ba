#include "J.ter.hpp"
#include <iostream>
#include "graphics.hpp"

using namespace std;
using namespace genv;

void Jter::draw()
{
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
