#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20;
   int *ptr;
    ptr=&a;
    *ptr=2;
    ptr=&b;
    *ptr=1;
    cout<<a<<endl;
    cout<<b;
    
    
}