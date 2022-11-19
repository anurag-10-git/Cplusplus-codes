#include<iostream>
using namespace std;
const int LEN=25;
class Employee
{
    
    
    public:
    void getdata()
    {
     cout<<"ENTER NAME:";
        gets(name);
        cout<<"Enter employee number"<<endl;
        cin>>enumb;
        cout<<"Basic salary:"<<basic;
    }
    protected:
    float basic;
    
    private:
    char name[LEN];
    unsigned long enumb;
};