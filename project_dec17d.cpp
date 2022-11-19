#include<iostream>
using namespace std;
class A
{
    int a;
    
    public:
    void setdata(int a)
    {
    this->a=a;
    }
    void getdata()
    {
     cout<<"a="<<a;
    }
};
int main()
{
    A a;
    a.setdata(5);
    a.getdata();
    
}