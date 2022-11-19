#include<iostream>
using namespace std;
class TEST
{
    int a;
    char b;
    
    public:
    
    TEST(int x=0,char y='y')
    {
     cout<<"constructor invoked"<<endl;
     a=x;
     b=y;
    }
    void display()
    {
      cout<<"a::"<<a<<endl;
      cout<<"b::"<<b<<endl;  
    }
    
};
int main()
{
    TEST ob1[5];
    TEST(1,'b').display();
    for(int i=0;i<5;i++)
    {
     cout<<"enter two values first integer second character"<<endl;
        int x;
        char y;
        cin>>x>>y;
        ob1[i]=TEST(x,y);
    }
    for(int i=0;i<5;i++)
    {
     ob1[i].display();
    }
    
}