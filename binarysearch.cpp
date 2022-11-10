#include<iostream>
using namespace std;
void binarySearch(int arr[],int key,int n)
{
  int low=0;
   int high=n-1;
   int mid=0;
   while(low<=high)
   {
       mid=(low+high)/2;
       if(arr[mid]==key)
       {
           cout<<"search found at positon "<<mid+1<<endl;
           return;
       }
       if(arr[mid]<key)
       {
           low=mid+1;
       }
       else
       {
           high=mid-1;
       }
   }
   cout<<"search not found"<<endl;
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
binarySearch(arr,key,n);
}