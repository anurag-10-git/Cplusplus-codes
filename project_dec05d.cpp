#include<iostream>
using namespace std;
class TEST
{
    int a;
    int b;   
    
    public:
    TEST()
    {
     cout<<"constructor called!!!"<<endl;
        a=10;
        b=20;
    }
    ~TEST()
    {
        cout<<"destructor called!"<<endl;
    }
};
int main()
{
    cout<<"object being created"<<endl;
    TEST ob1;
    cout<<"opening of body"<<endl;
    {
     TEST ob2;
    }
    cout<<"exiting body"<<endl;
}