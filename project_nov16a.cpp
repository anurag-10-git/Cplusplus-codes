#include<iostream>
using namespace std;
class Y;
class X
{
    private:
    int data;
    friend void add(X o1,Y o2);
    
    public:
    void setdata(int n1)
    {
        data=n1;
    }
};
class Y
{
   private:
    int num;
    friend void add(X o1,Y o2);
    
    public:
    void setdata(int n1)
    {
        num=n1;
    }  
};
void add(X o1,Y o2)
{
    cout<<"the sum of numbers="<<o1.data+o2.num;
}
int main()
{
    class X ob1;
    ob1.setdata(10);
    class Y ob2;
    ob2.setdata(15);
    add(ob1,ob2);
    
    
    
}