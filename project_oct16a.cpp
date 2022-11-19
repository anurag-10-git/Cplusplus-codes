#include<iostream>
using namespace std;
int summulti(int a, int b, int c)
{
    cout<<"\n==============\n";
    cout<<"the result is ";
return a+b*c;    
    }
int main()
{
    int a,b,c;
    cout<<"input three numbers"<<endl;
    cin>>a>>b>>c;
    cout<<summulti(a,b,c);
}