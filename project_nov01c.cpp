#include<iostream>
using namespace std;
int main()
{
   int a=10,b=20;
   int* ptr;

    
   ptr=&a,ptr=&b;
    *ptr=0;
    *ptr=5;
    cout<<a<<b;
}