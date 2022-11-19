#include<iostream>
using namespace std;
int binarysearch(int arr[],int key,int n)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
        e=mid-1;
    }
        else
        {
        s=mid+1;
    }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter max number\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array\n";
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
}
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    cout<<"output = "<<binarysearch(arr,key,n);
}