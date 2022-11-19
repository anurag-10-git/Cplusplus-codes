#include<iostream>
using namespace std;
int main()
{
int n,x=0,i;
cout<<"input maximum value"<<endl;
cin>>n;
for(i=1;i<=n;i+=2)
    {
        cout<<i<<endl;
    x=(x+(i*i*i));
        }
        cout<<"output"<<x;
    }