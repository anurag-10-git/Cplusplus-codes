#include<iostream>
using namespace std;
int add(int n)
{
    if(n<1)
    {
        return 0;
    }
return n+add(n-1);
    }
int main()
{
int x;
    cout<<"input number"<<endl;
    cin>>x;
    cout<<"addition="<<fact(x);
    }