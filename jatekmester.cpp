#include "graphics.hpp"
#include "Window.hpp"
#include "jatekmester.hpp"
#include<algorithm>


using namespace std;
using namespace genv;

bool Jatekmester::ellenorzo(std::vector<int> myvec,std::vector<int> myvec2)
{
    sort(myvec.begin(),myvec.end());
    sort(myvec2.begin(),myvec2.end());
    pw=1;
    for(unsigned i = 0 ; i < myvec.size()-1 ; i++)
        {
            if(myvec[i] == myvec[i+1]-1 && myvec2[i] == myvec2[i+1]-1 )
            {
                pw++;
                if(pw == 5)
                {
                    return true;
                }
            }
        }
    pw=1;
    for(unsigned i = 0 ; i < myvec.size()-1 ; i++)
        {
            if(myvec[i] == myvec[i+1]-1 && myvec2[i] == myvec2[i+1])
            {
                pw++;
                if(pw == 5)
                {
                    return true;
                }
            }
        }
        pw=1;
    for(unsigned i = 0 ; i < myvec.size()-1 ; i++)
        {
            if(myvec2[i] == myvec2[i+1]-1 && myvec[i] == myvec[i+1])
            {
                pw++;
                if(pw == 5)
                {
                    return true;
                }
            }
        }

    return false;
}

