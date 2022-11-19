#include<iostream>
using namespace std;
class number
{
    private:
    int n;
    
    public:
    number()
    {
     n=0;
    }
    number(int num)
    {
     n=num;
    }
     number(number &ob1)
    {
        cout<<"copy constructor called!!!"<<endl;
     n=ob1.n;
    }
    void display()
    {
     cout<<"output is "<<n<<endl;
    }
};
int main()
{
    class number ob1(2),ob4;
    ob1.display();
    number ob2(ob1);
    ob2.display();
    number ob3=ob1;
    ob3.display();
    int a=5;
    ob4=number(a);
    ob4.display();
    
}