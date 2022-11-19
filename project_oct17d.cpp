#include<iostream>
using namespace std;
void calculate(int arr[5])
{
    for(int i=0;i<5;i++)
    {
        arr[i]=arr[i]+10;
    }
}
int main()
{
    int a[5];
    cout<<"enter five number\n";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"--------------\n";
calculate(a);
    for(int i=0;i<5;i++) 
    {
        cout<<"the value of "<<i+1<<" is "<<a[i];
        cout<<endl;
    }
}