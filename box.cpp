#include "graphics.hpp"
#include "box.hpp"

using namespace genv;
using namespace std;

Box::Box(int _posbbox_x, int _posbbox_y,int _click):_posbbox_x(_posbbox_x),_posbbox_y(_posbbox_y),click(_click){}

void Box::draw()
{
        if(click == 1)
        {
            gout << color (255,0,255);
            gout << move_to(_posbbox_x*(MAX_X/hszam)+5,_posbbox_y*(MAX_Y/hszam)+5) << box_to((_posbbox_x+1)*(MAX_X/hszam)-5 ,(_posbbox_y+1)*(MAX_Y/hszam)-5);
        }

        if(click == 2)
        {
            gout << color(255,255,255);
            gout << move_to(_posbbox_x*(MAX_X/hszam)+5,_posbbox_y*(MAX_Y/hszam)+5) << box_to((_posbbox_x+1)*(MAX_X/hszam)-5 ,(_posbbox_y+1)*(MAX_Y/hszam)-5);
        }
}
void Box::eventHandler(event ev)
{
    cout << "asd " << endl;
}

