#include<iostream>
using namespace std;
class Base
{
    int a;
    float b;
    
    public:
    virtual void display()
    {}
};
int main()
{
    Base b;
    cout<<sizeof(b);
}