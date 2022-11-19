#include<iostream>
using namespace std;
int main()
{
    int n,fact;
    float x=0;
    cout<<"maximum number";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        float z=0;
        fact=1;
        for(int j=1;j<=i;j++)
        {
       fact=fact*j; 
            }
        z=(float)1/fact;
        cout<<z<<endl;
        x=x+(float)1/fact;
    }
    cout<<"value of sum of fractions="<<x;
}