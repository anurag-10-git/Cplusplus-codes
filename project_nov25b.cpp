#include<iostream>
using namespace std;
class complex;
class calculator
{
    public:
    int sumreal(complex,complex);
};
class complex
{
    private:
    int a,b;
   friend int calculator:: sumreal(complex,complex);
    
    public:
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    void getdata()
    {
     cout<<a<<" + "<<b<<"i"<<endl;
    }
};
int calculator::sumreal(complex ob1,complex ob2)
{
    return (ob1.a+ob2.a);
}

int main()
{
    class complex o1(1,2),o2(10,12);
    o1.getdata();
    o2.getdata();
    calculator calc;
    complex o3=complex(5,6);
    o3.getdata();
    int real=calc.sumreal(o1,o2);
    cout<<endl<<"sum of real part="<<real;
}