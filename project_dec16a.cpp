#include<iostream>
using namespace std;
class Test
{
    private:
    int a;
    int b;
    
    public:
    Test(int a1,int b1):a(a1),b(a+b1)
    {
        cout<<"constructor called!!"<<endl;
        cout<<"the value of a is "<<a<<" and b is  "<<b<<endl;
    }
};
int main()
{
    Test obj(3,4);
}