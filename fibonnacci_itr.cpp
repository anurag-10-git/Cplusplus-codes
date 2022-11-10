#include<iostream>
using namespace std;
int fibo(int n)
{
 if(n<=1)
 {
     return n;
 }
 int arr[n];
 arr[0]=0,arr[1]=1;
 for(int i=2;i<=n;i++)
 {
     arr[i]=arr[i-2]+arr[i-1];
 }
 return arr[n];
}
int main()
{
    int n;
    cout<<"enter the no series you want to find"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<"fibonacci = "<<fibo(i)<<endl;
    }
}