#include<iostream>
using namespace std;
void binarySearch(int arr[],int n,int key)
{
    int high=n-1,mid,low=0;
    int flag=0;
    
    while(low<=high)
    {
        mid=(high+low)/2;
        if(arr[mid]==key)
        {
            flag++;
         cout<<"element found"<<endl;
            break;
        }
        if(arr[mid]<key)
        {
            low=mid+1;
        }
        if(arr[mid]>key)
        {
         high=mid-1;
        }
    
    }
    if(flag==0)
    {
        cout<<"element not found"<<endl;
    }
}  
int main()
{  
    int n,key;
    cout<<"enter the max number of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }
    cout<<"enter the element to be found"<<endl;
    cin>>key;
    binarySearch(arr,n,key);
}