#include<iostream>
using namespace std;
class Base1
{
 int data1;
    
    public:
    Base1(int d)
    {
       data1=d;
       cout<<"constructor base1 called!"<<endl;
    }  
    void display1() 
    {
     cout<<"the value of base1 data: "<<data1<<endl;
    }
};
class Base2
{
 int data2;
    
    public:
    Base2(int d)
    {
       data2=d;
       cout<<"constructor base2 called!"<<endl;
    }  
    void display2() 
    {
     cout<<"the value of base2 data: "<<data2<<endl;
    }
};
class Derived:public Base1,virtual public Base2
{
  int derived1,derived2;
    
    public:
    Derived(int a,int b,int c,int d):Base1(a),Base2(b)
    {
    derived1=c;
    derived2=d;    
    cout<<"constructor of derived class called!!!"<<endl;    
    }
    void dispdata() 
    {
      display1();
        display2();
     cout<<"the value of derived1 data: "<<derived2<<endl;
        cout<<"the value of derived2 data: "<<derived2<<endl;
    }
};
int main()
{
   Derived obj=Derived(12,13,14,15); 
    obj.dispdata();
}