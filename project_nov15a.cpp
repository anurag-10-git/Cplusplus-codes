#include<iostream>
using namespace std;
class complex
{
    private:
    int a;
    int b;
    friend complex sumComplex(complex ob1,complex ob2);
    
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
complex sumComplex(complex ob1,complex ob2)
{
    complex ob3;
    ob3.setdata((ob1.a+ob2.a),(ob1.b+ob2.b));
    return ob3;
}
int main()
{
    class complex ob1,ob2,sum;
    ob1.setdata(1,2);
    ob2.setdata(5,6);
    ob1.getdata();
    ob2.getdata();
    sum=sumComplex(ob1,ob2);
    sum.getdata();
    
}