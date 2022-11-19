#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int* ptr=&a;
    cout<<ptr<<endl;
    int *p=new int(40);
    cout<<p<<endl;
    int *arr=new int[2];
    arr[0]=12;
    *(arr+1)=5;//dereferencing in array
    delete[] arr;
    cout<<arr[0]<<"\t"<<arr[1];
}