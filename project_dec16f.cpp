#include<iostream>
using namespace std;
class Complex
{
    int real;
    int imaginary;
    
    public:
    void getdata()
    {
     cout<<"real part is "<<real<<endl;
     cout<<"imaginary part is "<<imaginary<<endl;
    }
    void setdata(int a,int b)
    {
     real=a;
     imaginary=b;
    }
};
int main()
{
    
    Complex *ptr=new Complex;
    ptr->setdata(2,3);
    (*ptr).getdata();
    
}