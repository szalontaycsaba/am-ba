#include <iostream>
#include <algorithm>
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
    Jatekmester * jm = new Jatekmester;
    jt->draw();
    event ev;
    seged_x.push_back(-1);
    seged_y.push_back(-1);
    p2x.push_back(-3);
    p2y.push_back(-3);
    p1x.push_back(-3);
    p1y.push_back(-3);
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
                    p2x.push_back(posbox_x);
                    p2y.push_back(posbox_y);
                }

                if(lepesszamlalo % 2 != 0)
                {
                    window.push_back(new Box(posbox_x,posbox_y,2));
                    p1x.push_back(posbox_x);
                    p1y.push_back(posbox_y);
                }
                for (unsigned i = 0; i < posboxx.size() ; i++)
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

//Ez itt ????????????????

        gout << color(0,0,0) << move_to(0,0) << box(MAX_X+200, MAX_Y);

//ellenõrzés kezd.
        if(jm->ellenorzo(p2x,p2y) == true)
        {
            gout << color(255,255,255);
            gout << move_to(MAX_X+20 , 100) << text("player 1 nyert");
        }
        if(jm->ellenorzo(p1x,p1y) == true)
        {
            gout << color(255,255,255);
            gout << move_to(MAX_X+20 , 100) << text("player 2 nyert");
        }
//ell. vég

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
                p1x.clear();
                p2x.clear();
                p1y.clear();
                p2y.clear();
                posboxx.clear();
                posboxy.clear();
                seged_x.clear();
                seged_y.clear();
                seged_x.push_back(-1);
                seged_y.push_back(-1);
                p2x.push_back(-1);
                p2y.push_back(-1);
                p1x.push_back(-1);
                p1y.push_back(-1);
            }
        }
    }

    delete jt;
    delete jm;
    for(Window *w : window)
    {
        delete w;
    }
    return 0;
}
