#include<iostream>
using namespace std;
int addition(int n)
{
if(n==0)
{
return 0;
}
return n+addition(n-1);
}
int main()
{
int x;
cout<<"enter max number"<<endl;
cin>>x;
cout<<"sum of nth term = "<<addition(x);
}