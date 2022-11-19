#include<iostream>
using namespace std;
int main()
{
  int arr[4];
  int* ptr=arr;
  *ptr=10;
  ptr++;
  *ptr=20;
  ptr=&arr[2];
   *ptr=30;
    ptr=arr+3;
    *ptr=40;
  for(int i=0;i<4;i++)
    {
    cout<<arr[i]<<endl;
}
}