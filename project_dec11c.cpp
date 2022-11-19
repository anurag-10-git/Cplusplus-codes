#include<iostream>
using namespace std;
class Simple
{
    protected:
 float a,b,res;
    
    public:
    Simple()
    {} 
    Simple(float a1,float a2):a(a1),b(a2)     {}
    void display()
    {
     cout<<a<<endl;
        cout<<b;
    }
};
int main()
{
    Simple ob1(10,12);
    ob1.display();
}