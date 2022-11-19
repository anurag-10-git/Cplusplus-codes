#include<iostream>
using namespace std;
class X
{
    int x;
    
    public:
    int y;
    int z;
    X()
    {
     x=y=z=1;
    }
    void display()
    {
     cout<<x<<"::::"<<y<<"::::"<<z<<endl;
    }
};
