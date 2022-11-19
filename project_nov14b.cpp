#include<iostream>
using namespace std;
class complex
{
  private:
    int a;
    int b;
    
  public:
    friend complex sumcomplex(complex
    o1,complex o2);
    void setdata(int a1, int b1)
    {
     a=a1;
     b=b1;
    }
    void getdata()
    {
     cout<<a<<" + "<<b<<"i"<<endl;
    }
};
complex sumcomplex(complex o1,complex o2)
{
    complex ob3;
    ob3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return ob3;
}
int main()
{
   class complex ob1,ob2,sum;
    ob1.setdata(1,2);
    ob2.setdata(5,6);
    ob1.getdata();
    ob2.getdata();
    sum=sumcomplex(ob1,ob2);
    sum.getdata();
    
   
}