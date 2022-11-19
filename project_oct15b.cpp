#include<iostream>
using namespace std;
int fibb(int n)
{
    if(n<2)
    {
        return 1;
    }
return fibb(n-2)+fibb(n-1);
    }

int fact(int n)
{
    if(n<=1)
    {
    return 1;
    }
return n*fact(n-1);
    }
int main()
{
    int n;
    cout<<"find nth term"<<endl;
    cin>>n;
    cout<<"the nth term is      "<<fibb(n)<<endl;
    cout<<"===============\n";
    cout<<"factorial "<<fact(n);
}