#include<iostream>
using namespace std;
class Number
{
    int x;
    public:
    Number()
    {}
    Number(int a)
    {
     x=a;
    }
    Number(Number const &obj1)
    {
        cout<<"copy constructor"<<endl;
     x=obj1.x;
    }
    void display()
    {
        cout<<"x::"<<x<<endl;
    }
};
int main()
{
    Number ob1(20),ob2;
    ob1.display();
    ob2=Number(49);
    ob2.display();
    Number ob3(ob2);
    ob3.display();
}