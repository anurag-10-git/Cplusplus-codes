#include<iostream>
using namespace std;
class X
{
    int x;
    int y;
    public:
    X(int a=30,int b=12)
    {
       x=a;
       y=b; 
    }
    void display()
    {
     cout<<"x::"<<x<<" y::"<<y<<endl;
    }
};
int main()
{
    X ob1,ob2(13,14);
    ob1.display();
    ob2.display();
    
}
