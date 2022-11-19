#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;
    cout<<"input first value\n";
    cin>>x;
    cout<<"input second value\n";
    cin>>y;
    swap(x,y);
    cout<<x<<endl;
    cout<<y<<endl;
}