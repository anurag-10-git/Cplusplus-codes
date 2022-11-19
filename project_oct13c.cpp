#include<iostream>
using namespace std;
int fact(int n)
{
if(n<=1)
    {
        return 1;
    }    
return n=n*fact(n-1);
    }
int main()
{
    int x;
    cout<<"intput max number"<<endl;
    cin>>x;
    cout<<"factorial="<<fact(x);
}