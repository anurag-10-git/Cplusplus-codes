#include<iostream>
using namespace std;
void merge(int arr[],int arr1[],int arr3[])
{
    int i,j,k;
    i=0;
    j=0;
    k=0;
    while((i<5)&&(j<5))
    {
        if(arr[i]<=arr1[j])
        {
         arr3[k]=arr[i];
         k++;
         i++;
        }
        else if(arr[i]>arr1[j])
        {
         arr3[k]=arr1[j];
         k++;
         j++;
        }
    }
    while(i<5)
    {
      arr3[k]=arr[i];
      k++;
      i++;
    }
    while(j<5)
    {
      arr3[k]=arr[j];
      k++;
      j++;
    }
}

int main()
{
    int arr[5]={2,3,4,5,6};
    int arr1[5]={1,3,4,8,7};
    int arr3[10];
    merge(arr,arr1,arr3);
    for(int i=0;i<10;i++)
    {
        cout<<arr3[i]<<" ";
    }
}