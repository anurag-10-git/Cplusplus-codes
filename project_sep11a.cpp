#include<iostream>
using namespace std;
int main()
{
float a=34.4f;
long double e=34.4L;
cout<<sizeof(34.4)<<endl;
    cout<<a<<endl;
    cout<<e<<endl;
    cout<<sizeof(34.4f)<<endl;
    cout<<sizeof(e)<<endl;
    float x=455.5;
    float &y=x;
    cout<<x<<endl;
    cout<<y<<endl;
    x=x-5;
    cout<<y<<endl;
    cout<<(int)x;
    }