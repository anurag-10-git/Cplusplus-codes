#include<iostream>
using namespace std;
int count=0;
class num
{
    public:
    num()
    {
     count++;
        cout<<"constructor called for object no"<<count<<endl;
        
    }
    ~num()
    {
        cout<<"destructor called for object no "<<count<<endl;
        count--;
    }
    
};
int main()
{
    cout<<"object 1 being created"<<endl;
    class num ob1;
    cout<<"entering the body"<<endl;
    {
        cout<<"object 2 and 3 created"<<endl;
        num ob2,ob3;
    }
    cout<<"exiting the body "<<endl;
}