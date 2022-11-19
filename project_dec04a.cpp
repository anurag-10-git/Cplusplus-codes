#include<iostream>
using namespace std;
class TEST
{
    int a,b;
    public:
    TEST()
    {}
    TEST(int x,int y)
    {
        a=x;
        b=y;
    }
    TEST(TEST &ob)
    {
     a=ob.a;
        b=ob.b;
    }
    void display()
    {
     cout<<"a::"<<a<<" b::"<<b<<endl;
    }
};
int main()
{
    TEST ob1(12,13),ob2;
    ob1.display();
    ob2=TEST(1,2);
    ob2.display();
    TEST ob3=ob1;
    ob3.display();
    TEST ob4(ob2);
    ob4.display();
}