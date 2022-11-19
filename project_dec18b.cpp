#include<iostream>
#include<cstring>
using namespace std;
class CWH
{
    protected:
    string title;
    float rating;
    
    public:
    CWH(string s,float r)
    {
        title=s;
        rating=r;
    }
};
class CWHvideo:public CWH
{
    float vlength;
    public:
    CWHvideo(string v1,float v2,float v3):CWH(v1,v2)
    {
        vlength=v3;
    }
    void display()
    {
    
    }
};

   CWHvideo(string v1,float v2,float v3):CWH(v1,v2)
    {
        vlength=v3;
    }
    void display()
    {
     cout<<"the title of the video is "<<title<<" rated "<<rating<<" video length "<<vlength<<endl;
    }
};