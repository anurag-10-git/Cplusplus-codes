#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high);
void mergesort(int arr[],int low,int high);
int main()
{
 int n;
    cout<<"enter array size \n";  
    cin>>n; 
    int arr[n];
    cout<<"enter array elements\n";
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }
   merge(arr,0,1,n-1);
    for(int j=0;j<n;j++)
    {
     cout<<arr[j];
    }
}
void merge(int A[], int mid, int low, int high) { int i, j, k, B[100]; i = low; j = mid + 1; k = low; while (i <= mid && j <= high) { if (A[i] < A[j]) { B[k] = A[i]; i++; k++; } else { B[k] = A[j]; j++; k++; } } while (i <= mid) { B[k] = A[i]; k++; i++; } while (j <= high) { B[k] = A[j]; k++; j++; } for (int i = low; i <= high; i++) { A[i] = B[i]; } } void mergeSort(int A[], int low, int high){ int mid; if(low<high){ mid = (low + high) /2; mergeSort(A, low, mid); mergeSort(A, mid+1, high); merge(A, mid, low, high); } }