#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int* ptr=&a;
    int* p=new int(40);
    int* arr=new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    delete[] arr;
    cout<<"the value of a is "<<*ptr<<endl;
    cout<<*p<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
}