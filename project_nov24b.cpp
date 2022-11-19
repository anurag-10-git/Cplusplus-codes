#include<iostream>
using namespace std;
class complex
{ private:
    int num;
    friend complex sum(complex ob1,complex ob2);
    public:
  void setdata(int n1)
    {
     num=n1;
    }
    void getdata()
    {
    cout<<num;
    }
};
complex sum(complex ob1,complex ob2)
{
    complex ob3;
    ob3.num=(ob1.num)+(ob2.num);
    return ob3;
    
}
