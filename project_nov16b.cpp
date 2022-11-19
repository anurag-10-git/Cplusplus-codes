#include<iostream>
using namespace std;
class Y;
class X
{
    friend void add(X o1, Y o2);
       int data;
    public:
    void getdata(int n1)
    {
        data=n1;
    }
};
class Y
{
    friend void add(X o1, Y o2);
    int num;
    public:
    void getdata(int n1)
    {
     num=n1;
    }
};
void add(X o1, Y o2)
{
    cout<<"sum= "<<o1.data+o2.num;
}
int main()
{
    X n1;
    n1.getdata(2);
    Y n2;
    n2.getdata(5);
    add(n1,n2);
}