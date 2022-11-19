#include<iostream>
using namespace std;
int main()
{
    cout<<"enter max number";
    int a;
    int z;
    cin>>a;
    for(int i=1;i<=2*a;i++)
    {
        if(i>a)
        {
        z=(2*a-i);
            }
        else
        z=i;
        for(int j=1;j<=z;j++)
        {
        
        cout<<"*";
            }
        
       cout<<endl;
        }
}