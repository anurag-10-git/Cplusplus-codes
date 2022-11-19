#include<iostream>
using namespace std;
void swap(int* x,int* y)
{
temp=x;
x=y;
y=temp;
}
int main()
{
a=5;
b=3;
swap(&a,&b);
cout<<"value of a is "<<a<<endl;
cout<<"value of b is "<<b<<endl;
}