#include<iostream>
using namespace std;
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }
}
void selectionsort(int arr[],int n)
{
    int key,j;
    for(int i=1;i<=n;i++)
    {
    key=arr[i];
        
        j=i-1;
        while((j>-1)&&(arr[j]>key))
        {
           arr[j+1]=arr[j]; 
            j--;
        }
        arr[j+1]=key;
}
    
}
int main()
{
    int n;
    cout<<"enter max number"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
   printarr(arr,n) ;
    cout<<endl;
   selectionsort(arr,n);
    printarr(arr,n);
    
}