#include<iostream>
using namespace std;
void multi(int a,int b)
{
int c=0;
    c=a*b;
    cout<<"\n the product of the operands is\n"<<c;
    }
int main()
{
    int a=5,b=6;
    multi(a,b);
    multi(a+3,b+6);
    }
