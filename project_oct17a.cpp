#include<iostream>
using namespace std;
int main()
{
int a[5];
    int i,sum=0;
cout<<"enter the five value"<<endl;
    cout<<"---------------\n"; 
for(i=0;i<5;i++)
    {
        cout<<"enter the value of "<<i+1<<endl;
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
    sum=sum+a[i];
}
    cout<<"----------------\n";
    cout<<"sum = "<<sum;
          }