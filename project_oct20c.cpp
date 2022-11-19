#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int ele)
{
    int low=0;
    int high=n;
    int mid;
    while(low<=high)
    {
       mid=(low+high)/2;
       if(arr[mid]==ele)
        {
            return mid+1;
        }
       if(arr[mid]<ele)
        {
            low=mid+1;
        }
        else
        {
        high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n,ele;
    cout<<"enter the size\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements\n";
    
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];  
    }
    cout<<"enter element\n";
    cin>>ele;
    cout<<"if search found it will give position of the element\n";
    cout<<"if not found it will give -1\n";
    cout<<binarysearch(arr,n,ele);
 
}