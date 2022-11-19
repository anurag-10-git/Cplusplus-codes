#include<iostream>
using namespace std;
int binarysearch(int arr[],int element)
{
    int low=0;
    int high=5;
    while(low<=high)
    {
        int mid=(low+high)/2;
    if(arr[mid]==element)
        {
        return mid+1;
    }
        else if(arr[mid]<element)
        {
        mid=low+1;
    }
        else if(arr[mid]>element)
        {
            mid=high-1;
        }
}
    return -1;
}
int main()
{
    int n,element=5;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
     }
    cout<<"enter the element to be found 5\n";
    cout<<"element = "<<binarysearch(arr,element);
}