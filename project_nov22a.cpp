#include<iostream>
using namespace std;
class X
{
    int x,y;
    
    
    public:
     void setdata(int a,int b)
    {
      x=a;
      y=b;
    }
    void getdata()
    {
     cout<<x<<endl;
        cout<<y<<endl;
    }
}ob1,ob2;
int main()
{
  ob1.setdata(1,2);
    ob2.setdata(8,9);
      ob1.getdata();
    ob2.getdata();
}