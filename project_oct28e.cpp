#include<iostream>
using namespace std;
void swap(int* x,int* y)
{

int temp=*x;
*x=*y;
*y=temp;
}
int main()
{
int a=5;
int b=3;
swap(&a,&b);
cout<<"value of a is "<<a<<endl;
cout<<"value of b is "<<b<<endl;
}