#include<iostream>
using namespace std;
int binarycalls(int arr[],int key,int n,int low,int high)
{
  if(low==high)
  {
    if(arr[low]==key)
    {
        return low+1;
    }
    else
    return 0;
  }
  else{
      int mid=(low+high)/2;
      if(key==arr[mid])
      {
          return mid+1;
      }
      if(key<arr[mid])
      {
          return binarycalls(arr,key,n,low,mid-1);
      }
      else
      {
          return binarycalls(arr,key,n,mid+1,high);
      }
  }
}
int main()
{
cout<<"enter the size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key elements to be searched for"<<endl;
    int key;
    cin>>key;
    int b=binarycalls(arr,key,n,0,n-1);
    cout<<b;
}
