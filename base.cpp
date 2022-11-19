#include<iostream>
using namespace std;
class B
{
    protected:
    void say()
    {
     cout<<"hello world!!!"<<endl;
    }
};
class D:public B
{
    public:
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