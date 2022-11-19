#include<iostream>
using namespace std;
class Base1
{
   public:
    void greet()
    {
   cout<<"HOW ARE YOU???"<<endl;
    }
};

class Base2
{
   public:
    void greet()
    {
   cout<<"KAISE HO???"<<endl;
    }
};

class Derived:public Base1,public Base2
{
    int a;
    public:
    void greet()
    {
     Base1::greet();
    }
};
int main()
{
    Base1 obj1;
    Base2 obj2;
    obj1.greet();
    obj2.greet();
    Derived d1;
    d1.greet();
}