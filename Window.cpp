#include <iostream>
#include "Window.hpp"
#include "J.ter.hpp"
#include "jatekmester.hpp"
#include "graphics.hpp"
#include "box.hpp"

using namespace genv;
using namespace std;

int Window::eventloop()
{
    gout.open(MAX_X+200, MAX_Y);
    Jter * jt = new Jter ;
    jt->draw();
    event ev;
    seged_x.push_back(-1);
    seged_y.push_back(-1);
    while(gin >> ev && ev.keycode != key_escape)
    {
        if(ev.type == ev_mouse)
        {
            if(ev.button == btn_left)
            {
                for (int i = 0 ; i < hszam ; i++)
                {
                    for (int j = 0; j < hszam ; j++)
                    {
                        if( ev.pos_x < (MAX_X/hszam)*i + (MAX_X/hszam) && ev.pos_y < (MAX_Y/hszam)*j + (MAX_Y/hszam) && ev.pos_x > (MAX_X/hszam)*i && ev.pos_y > (MAX_Y/hszam)*j)
                        {
                            lepesszamlalo++;
                            posbox_x = i;
                            posbox_y = j;
                            posboxx.push_back(posbox_x);
                            posboxy.push_back(posbox_y);

                        }
                    }
                }
                seged_x.push_back(posbox_x);
                seged_y.push_back(posbox_y);

                if(lepesszamlalo % 2 == 0)
                {
                    window.push_back(new Box(posbox_x,posbox_y,1));
                }

                if(lepesszamlalo % 2 != 0)
                {
                    window.push_back(new Box(posbox_x,posbox_y,2));
                }
                for (int i = 0; i < posboxx.size() ; i++)
                {
                    if(posboxx[i] == seged_x[i])
                    {
                        if(posboxy[i] == seged_y[i])
                        {
                            window.pop_back();
                            posboxx.pop_back();
                            posboxy.pop_back();
                            seged_x.pop_back();
                            seged_y.pop_back();
                            lepesszamlalo--;
                        }
                    }
                }
            }
        }

        gout << color(0,0,0) << move_to(0,0) << box(MAX_X, MAX_Y);
        for(Window * w : window)
        {
            w->draw();
        }
        jt->draw();
        gout << refresh;
        if(ev.type == ev_key)
        {
            if(ev.keycode == key_backspace)
            {
                window.clear();
            }
        }
    }
    delete jt;
    for(Window *w : window)
    {
        delete w;
    }
    return 0;
}
