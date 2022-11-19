#include<iostream>
using namespace std;
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }
}
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int temp=0;
       for(int j=0;j<(n-1-i);j++) 
        {
            if(arr[j]>arr[j+1])
            {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
                }
        }
    
    }
}
int main()
{
    int n;
    cout<<"max number of array ";
    cin>>n;
    int arr[n];
    cout<<"\n enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    cout<<"elements of array before sorting"<<endl;
    printarr(arr,n);
    bubblesort(arr,n);
    cout<<"\nelements of array after sorting"<<endl;
    printarr(arr,n);
}