#include<iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    int temp;
    do
    {
      while(arr[i]<=pivot)
      {
          i++;
      }
      while(arr[j]>pivot)
      {
          j--;
      }
      if(i<j)
      {
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
      }
    } while (i<j);

    temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;

    return j;
}
void quicksort(int arr[],int low,int high)
{
    int partitionIndex;
    if(low<high)
    {
     partitionIndex=partition(arr,low,high);
     quicksort(arr,low,partitionIndex-1);
     quicksort(arr,partitionIndex+1,high);
    }
}
 int main()
 {
     int arr[]={2,1,5,3,7,4,8,4,2,8,0,3,5,7,89,00,66,89,12};
     cout<<"array after sorting :: ";
     int len=sizeof(arr)/sizeof(arr[0]);
     cout<<len<<endl;
     quicksort(arr,0,len-1);
     for(int i=0;i<len;i++)
     {
         cout<<arr[i]<<" ";
     }
 }
