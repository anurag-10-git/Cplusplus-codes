#include<iostream>
using namespace std;
class simple
{   
    private:
    int data1;
    int data2;
    
    public:
    simple(int a,int b=9)
    {
        data1=a;
        data2=b;
    }
    void display();
};
void simple::display()
{
    cout<<"the value of data1 and data2 are " <<data1<<" and "<<data2;
}
int main()
{
    class simple ob1(1);
    ob1.display();
    
}