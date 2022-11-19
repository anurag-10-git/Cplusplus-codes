#include<iostream>
using namespace std;
class employee
{
    private:
    int a,b,c;
    
    public:
    int d,e;
    
    void setdata(int x,int y,int z);
    void getdata()
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
    }
};
void employee::setdata(int x,int y,int z)
{
    a=x;
    b=y;
    c=z; 
}
int main()
{
    
    employee ep1;
    ep1.d=4;
    ep1.e=8;
    ep1.setdata(1,2,3);
    ep1.getdata();
}