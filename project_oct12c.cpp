#include<iostream>
using namespace std;
int multi(int a,int b)
{
int c=a*b;
return c;
}
int main()
{
int a,b;
cout<<"input two values"<<endl;
cin>>a>>b;
cout<<"\nmultiplication of two numbers"<<endl;
cout<<multi(a,b);
}
