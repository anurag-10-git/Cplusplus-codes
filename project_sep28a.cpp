#include<iostream>
using namespace std;
int main()
{
    int n;
    int j,i;
    cout<<"input";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
   for(i=0;i<=n;i++)
    {
       for(j=1;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
