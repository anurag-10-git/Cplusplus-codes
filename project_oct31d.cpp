#include<iostream>
using namespace std;
int main()
{
  int arr[]={10,12,30};
    int *ptr=arr;
    int **q=&ptr;
    for(int i=0;i<3;i++)
    {
    cout<<*(arr+i)<<endl; 
     
    } 
    cout<<*q<<endl;
    cout<<**q<<endl;
}