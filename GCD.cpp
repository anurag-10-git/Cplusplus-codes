#include<iostream>
#include<conio.h>
using namespace std;
int GCD(int x,int y)
{
    if(x==y)
    return y;
    if(x%y==0)
    return y;
    if(y%x==0)
    return x;
    if(x>y)
    {
        return GCD(x%y,y);
    }
    else
    {
        return GCD(y%x,x);
    }
}
int main()
{
cout<<"GCD of two numbers"<<endl;
int a,b;
cout<<"enter value of a then b"<<endl;
cin>>a>>b;
int c=GCD(a,b);
cout<<"the gcd of two number using euclid method "<<c;
getch();
}