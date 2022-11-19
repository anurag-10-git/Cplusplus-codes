#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,e,f=1,r=2;
    int x;
    cout<<"maximum";
    cin>>x;
    for(a=1;a<=x;a++)
    {
        for(b=1;b<=a;b++)
        cout<<b;
        for(d=5;d>=f;d=d-1)
        cout<<" ";
        for(e=1;e<r;e++)
        cout<<a;
        for(c=1;c<a;c++)
        cout<<a-c;
        cout<<endl;
        f=f+2;
        if(a==3)
        {
            r=0;
        }
        else
        r=2;
    }}