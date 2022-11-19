#include<iostream>
using namespace std;
class Base
{
    public:
    int a=4;
    void virtual display()
    {
     cout<<"value in base class:"<<a<<endl;
    }
};
class Derived:public Base
{
    public:
    int b=5;
    void display()
    {
     cout<<"the value in derived class"<<b<<endl;
    }
};
int main()
{
    Base* base_pointer;
    Base base_obj;
    Derived derived_obj;
    base_pointer=&derived_obj;
    
    base_pointer->display();
    
    base_pointer->display();
    
    Derived* derived_pointer=&derived_obj;
    
    derived_pointer->display();   
}