
#include<iostream>
using namespace std;
class B
{
    public:
    void say()
    {
     cout<<"hello world!!!"<<endl;
    }
};
class D:public B
{
    public:
    using B::say;
    void say()
    {
     cout<<"messi the g.o.a.t"<<endl;
    }
};
int main()
{
   D ob;
   ob.say();
}