#include<iostream>
using namespace std;
class complex;
class calculator
{
    public:
 int add(int a,int b)   
    {
    return a+b;
   } int sumrealcomplex(complex x1,complex x2 );
     int sumcompcomplex(complex x1,complex x2 );
};
    
class complex
{
    private:
    int a;
    int b;
    //friend int calculator;
 friend int calculator:: sumrealcomplex(complex a1,complex a2);
    friend int calculator:: sumcompcomplex(complex a1,complex a2);    
    public:
    void setdata(int n1,int n2)
    {
       a=n1;
       b=n2;   
    }
    void getdata()
    {
    cout<<a<<" + "<<b<<"i"<<endl;
    }
};
int calculator::sumrealcomplex(complex a1,complex a2)
    {
    return (a1.a+a2.a);
}
int calculator::sumcompcomplex(complex a1,complex a2)
    {
    return (a1.b+a2.b);
}
int main()
{
complex o1,o2;
    o1.setdata(1,2);
    o2.setdata(7,5);
    o1.getdata();
    o2.getdata();
    calculator calc;
    int rel=calc.sumrealcomplex(o1,o2);
    cout<<"real part="<<rel<<endl;
    int relc=calc.sumcompcomplex(o1,o2);
    cout<<"complex part="<<relc;
}
