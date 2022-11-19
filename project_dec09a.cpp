#include<iostream>
using namespace std;
class BASE
{
   int data1;
    
   public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void BASE::setdata()
{
    data1=10;
    data2=20;
}
int BASE::getdata1()
{
  return data1;  
}
int BASE::getdata2()
{
  return data2;  
}
class DERIVED:private BASE
{
    int data3;
    
    public:
    void process();
    void display(); 
};
void DERIVED::process()
{
    setdata();
    data3=data2*getdata1();
}
void DERIVED::display()
{
    cout<<"value of data1="<<getdata1()<<endl;
    cout<<"value of data2="<<data2<<endl;
    cout<<"value of data3="<<data3<<endl;
}
int main()
{
    class BASE dr;
    class DERIVED der;
  //  der.setdata();
    der.process();
    der.display();
}