#include<iostream>
using namespace std;
class complex
{
    private:
    int a;
    int b;
    
    public:
    
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void iota(complex o1,complex o2)
    {
       a=o1.a+o2.a;
       b=o1.b+o2.b; 
    }
    void getdata()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
class complex c1,c2,c3;
    c1.setdata(1,2);
    c1.getdata();
    c2.setdata(5,6);
    c2.getdata();
    c3.iota(c1,c2);
    c3.getdata();
    
    
    }