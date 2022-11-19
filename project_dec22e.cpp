#include<iostream>
using namespace std;
template<class X=int,class Y=float>
class harry
{
  X a;
  Y b;
    public:
    harry(X x,Y y) 
    {
     a=x;
     b=y;
    } 
    void display() 
    {
     cout<<"a="<<a<<endl;
     cout<<"b="<<b<<endl;
    }
};
int main()
{
    harry<>h1(12,4.5);
    h1.display();
    cout<<endl;
    harry<string,char>h2("golu",'d');
    h2.display();  
}