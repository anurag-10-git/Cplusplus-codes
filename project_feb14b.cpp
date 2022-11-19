#include<iostream>
using namespace std;
void mergesort(int arr1[],int arr2[],int arr3[],int n,int m);
int main()
{
    int n,m;
    cout<<"enter the size of array 1"<<endl;
    cin>>n;
    cout<<"enter the size of array 2"<<endl;
    cin>>m;
    int arr1[n],arr2[m];
    cout<<"enter value in array 1"<<endl;
 for(int i=0;i<n;i++)
  {
   cin>>arr1[i];
            }  
    cout<<"enter value in array 2"<<endl; 
    for(int j=0;j<m;j++)
  {
   cin>>arr2[j];
            }       

int arr3[n+m];
mergesort(arr1,arr2,arr3,n,m);
for(int k=0;k<(n+m);k++)
{
  cout<<arr3[k]<<"\t";  
}       
}
void mergesort(int arr1[],int arr2[],int arr3[],int n,int m)
{
 int i,j,k;
     i=j=k=0;   
    while((i<n)&&(j<m))
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++,k++;
        }
        else
        {
           arr3[k]=arr2[j];
            j++,k++;
        }
    }
    while(i<n)
    {
     arr3[k]=arr1[i];
     i++,k++;
    }
    while(j<m)
    {
     arr3[k]=arr2[j];
     j++,k++;
    }
}