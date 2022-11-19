#include<iostream>
using namespace std;
int test;
class base
{
    int test;
    
    public:
    void getdata()
    {
      cout<<"enter test"<<endl;
      cin>>test;
    }
};
class derived:public base
{
    public:
    void check()
    {
     test++;
    }
};