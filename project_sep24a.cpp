#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int n;
    cout<<"input maximum number"<<endl;
    cin>>n;
    if(n%2==0)
    n=n-1;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            cout<<i;
            a=a+i; 
         if(i==n)
         goto x;
         cout<<"+";
        }
         
        }
    x:
    cout<<"="<<a;
}
