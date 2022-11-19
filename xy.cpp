#include<iostream>
using namespace std;
class coordinate
{
    private:
    int x;
    int y;
    
    public:
    coordinate(int a,int b)
    {
     x=a;
     y=b;
    }
  void display()
    {
     cout<<"the coordinate is ("<<x<<","<<y<<")";
    }
};
int maim()
{
    coordinate co1(3,4);
    co1.display();
}
