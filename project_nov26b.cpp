#include<iostream>
using namespace std;
class complex
{
    private:
    int a;
    int b;
    
    public:
    complex(int x,int y)
    {
       a=x;
       b=y;    
    }
    complex(int x)
    {
        a=x;
        b=0;
    }
    complex()
    {
      a=0;
        b=0;
    }
    void display()
    {
     cout<<a<<" + "<<b<<"i"<<endl;
    }
};
int main()
{
  class complex ob1(10,12),ob2(2),ob3;
    ob1.display();
    ob2.display();
    ob3.display();
}