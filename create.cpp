#include<iostream>
using namespace std;
class XYZ
{
    int a,b;
    public:
    
    
    XYZ(int m,int n)
    {
     a=m,b=n;
    }
    void display()
    {
     cout<<"a "<<a<<" ::"<<"b "<<b<<endl;
    }
};
int main()
{
    int x,y;
    cout<<"input x and y"<<endl;
    cin>>x>>y;
    XYZ ob1(x,y);
    ob1.display();
}