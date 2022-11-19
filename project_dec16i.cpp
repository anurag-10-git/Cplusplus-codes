#include<iostream>
using namespace std;
class Base1
{
    protected:
    int a;
    
    public:
    Base1(int a1):a(a1)
    {
     cout<<"constructor base1 called!"<<endl;
    }
    ~Base1()
    {
     cout<<"destructor base1 called!"<<endl;
    }
};
class Base2
{
    protected:
    int b;
    
    public:
    Base2(int b1):b(b1)
    {
     cout<<"constructor base2 called!"<<endl;
    }
    ~Base2()
    {
     cout<<"destructor base2 called!"<<endl;
    }
};
class Derived:public Base1,public Base2
{
    int c;
    
    public:
    Derived(int v1,int v2,int v3):c(v3),Base1(v1),Base2(v2)
    {
      cout<<"derived constructor called!!"<<endl; 
    }
    ~Derived()
{
  cout<<"derived destructor called!"<<endl;
}
};

int main()
{
    Derived obj(12,2,4);
}