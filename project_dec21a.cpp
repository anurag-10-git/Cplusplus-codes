#include<iostream>
using namespace std;
template<class X,class Y>
Y big(X a,Y b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    cout<<"the greater is "<<big(5,8)<<endl;
    cout<<"the greater number is "<<big(5.5,6.8)<<endl;
 cout<<"the greater number is "<<big(4,6.2);
}