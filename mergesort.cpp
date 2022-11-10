#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high);
void mergesort(int arr[],int low,int high);
int main()
{
int n;
cout<<"enter the max number of array"<<endl;
cin>>n;
int arr[n];
cout<<"enter the elements of array"<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
mergesort(arr,0,n-1);
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
}
void merge(int arr[],int low,int mid,int high)
{
int i,j,k;
i=low;
j=mid+1;
k=low;
int arr1[100];
while((i<=mid)&&(j<=high))
{
    if(arr[i]<=arr[j])
    {
        arr1[k]=arr[i];
        i++;
        k++;
    }
    else
     {
        arr1[k]=arr[j];
        j++;
        k++;
    }
}
while(i<=mid)
{
    arr1[k]=arr[i];
    i++;
    k++;
}
while(j<=high)
{
    arr1[k]=arr[j];
    j++;
    k++;
}
for(int i=0;i<=high;i++)
{
 arr[i]=arr1[i];
}
}
void mergesort(int arr[],int low,int high)
{
 if(low<high)
 {
     int mid=(low+high)/2;
     mergesort(arr,low,mid);
     mergesort(arr,mid+1,high);
     merge(arr,low,mid,high);
 }
}