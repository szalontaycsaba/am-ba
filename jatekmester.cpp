#include "graphics.hpp"
#include "Window.hpp"
#include "jatekmester.hpp"
#include <algorithm>


using namespace std;
using namespace genv;

bool Jatekmester::ellenorzo(std::vector<int> myvec,std::vector<int> myvec2)
{
//    sort(myvec.begin(),myvec.end());
//    sort(myvec2.begin(),myvec2.end());

    if(myvec.size() > 5)
    {
        cout << "asd ";
        pw=1;
        for(unsigned i = 1 ; i < myvec.size()-1 ; i++)
        {
            pw = 1;
            for(unsigned j = 1 ; j < myvec.size()-1 ; j++)
            {
                if(myvec[i] > myvec[i+j])
                {
                    if(myvec[i] == (myvec[i+j])+j && myvec2[i] == (myvec2[i+j])-j)
                    {
                        pw++;
                        if(pw == 5)
                        {
                            return true;
                        }
                    }
                }

                if(myvec2[i] > myvec2[i+j])
                {
                    if(myvec[i] == (myvec[i+j])-j && myvec2[i] == (myvec2[i+j])+j)
                    {
                        pw++;
                        if(pw == 5)
                        {
                            return true;
                        }
                    }
                }

                if(myvec[i] > myvec[i+j] && myvec2[i] > myvec2[i+j])
                {
                    if(myvec[i] == (myvec[i+j])+j && myvec2[i] == (myvec2[i+j])+j)
                    {
                        pw++;
                        if(pw == 5)
                        {
                            return true;
                        }
                    }
                }

                if (myvec[i] == (myvec[i+j])-j && myvec2[i] == (myvec2[i+j])-j)
                {
                    pw++;
                    if(pw == 5)
                    {
                        return true;
                    }
                }
            }
        }


        pw=1;
        for(unsigned i = 1 ; i < myvec.size()-1 ; i++)
        {
            pw = 1;

            for(unsigned j = 1 ; j < myvec.size()-1 ; j++)
            {
                if(myvec[i] > myvec[i+j])
                {
                    if(myvec[i] == (myvec[i+j])+j && myvec2[i] == myvec2[i+j])
                    {
                        pw++;
                        if(pw == 5)
                        {
                            return true;
                        }
                    }
                }

                if (myvec[i] == (myvec[i+j])-j && myvec2[i] == myvec2[i+j])
                {
                    pw++;
                    if(pw == 5)
                    {
                        return true;
                    }
                }
            }
        }
        pw=1;
        for(unsigned i = 1 ; i < myvec.size()-1 ; i++)
        {
            pw = 1;
            for(unsigned j = 1 ; j < myvec.size() ; j++)
            {
                if(myvec2[i] > myvec2[i+j])
                {
                    if(myvec2[i] == (myvec2[i+j])+j && myvec[i] == myvec[i+j])
                    {
                        pw++;
                        if(pw == 5)
                        {
                            return true;
                        }
                    }
                }

                if(myvec2[i] == (myvec2[i+j])-j && myvec[i] == myvec[i+j])
                {
                    pw++;
                    if(pw == 5)
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

