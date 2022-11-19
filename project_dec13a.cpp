#include<iostream>
using namespace std;
class BASE
{
    int a;
    float b;
    
    public:
    BASE(int i,float j)
    {
        a=i;
        b=j;
    }
    void display()
    {
     cout<<"a="<<a<<endl;
     cout<<"b="<<b<<endl;
    }
};
class Derived:public BASE
{
    private:
    int x;
    int y;
    public:
    Derived(int i,int j,int p,float q):BASE(p,q)
    {
        x=i;
        y=j;     
    }
   void show()
    {
     cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
    }
};
int main()
{
    class Derived obj(10,12,4,5);
    obj.display();
    obj.show();
}