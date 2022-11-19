#include<iostream>
using namespace std;
template<class X,class Y>
Y average(X a,Y b)
{
    Y d=(a+b)/2;
    return d;  
}
template<class T1,class T2>
void swap(T1 &a,T2 &b)
{
    float temp=a;
    a=b;
    b=temp;
}
int main()
{
    cout<<"the average ="<<average(45,45.7);
    cout<<endl;
    int a=5;
    float b=4.7;
    swap(a,b);
    cout<<"before swap a=5 after swap a="<<a<<endl;
    cout<<"before swap b=4.7 after swap a="<<b<<endl;
}