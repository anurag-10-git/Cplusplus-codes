#include<iostream>
using namespace std;
int main()
{
    float a[5];
    int i;
    cout<<"enter %age of 20 students \n";
    cout<<"---------------\n";
    for(i=0;i<5;i++)
    {
        cout<<"enter the value for "<<i+1<<endl;
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        float sum=0; 
       sum=a[i]+10;
        cout<<"result = "<<sum<<endl;
    }
}