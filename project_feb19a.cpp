#include<iostream>
using namespace std;
int main()
{
    int n,cn=1;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        
     for(int j=1;j<=i;j++)
     {
      cout<<" ";  
     }
     for(int k=0;k<cn;k++)
      {
        cout<<"*";
    }
        cn++;
        cout<<endl;
    }
}