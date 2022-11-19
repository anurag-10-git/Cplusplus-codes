#include<iostream>
using namespace std;
int main()
{
    int a[15],n;
    
    cout<<"enter the number less than 16:";
        cin>>n;
    
    for(int i=0;i<n;i++)
    {
      cout<<"\nenter the "<<i+1<<" element\n";
        cin>>a[i];
        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        for(i=0;i<n;i++)
        a[i]=a[i]*10;
        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    }
}