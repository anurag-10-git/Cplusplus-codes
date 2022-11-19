#include<iostream>
using namespace std;
class Employee
{
    private:
    int a,b,c;
    protected:
    int d,e;
    void setdata(int x,int y,int z);
    void getdata(void)
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
    }
};
void Employee::setdata(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
}
int main()
{
    Employee anu;
    //int x=1,y=2,z=3;
    anu.setdata(1,2,3);    
}