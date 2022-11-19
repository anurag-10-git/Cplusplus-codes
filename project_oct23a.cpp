#include<iostream>
using namespace std;
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }
}
void insertionsort(int arr[],int n)
{
    int hold,j;
    for(int i=1;i<n;i++)
    {
    hold=arr[i];
        j=i-1;
        while((j>-1)&&(arr[j]>hold))
        {
          arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=hold;
        
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
    insertionsort(arr,n);
    cout<<"\nelements of array after sorting"<<endl;
    printarr(arr,n);
    }