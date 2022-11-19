#include<stdio.h>
#include<time.h>
void merge(int a[],int low,int mid,int high);
void mergesort(int arr[],int low,int high);
int main()
{
 int n,i=0;
 printf("enter the maximum size of the array\n");
 scanf("%d",&n);
  int arr[100];
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
      scanf("%d\n",&arr[i]);  
    }       
merge(arr,0,1,n-1);
    
for(i=0;i<n;i++)
    {
      printf("%d\n",arr[i]);  
    }       
 }

void merge(int a[],int low,int mid,int high)
{
    int i,j,k,x;
    int b[high+1];
    i=low;
    j=mid+1;
    k=low;
    while((i<=mid)&&(j<=high))
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++,k++;
        }
        else
        {
          b[k]=b[j];
          j++,k++;  
        }
    } 
    while(i<=mid)   
    {
        b[k]=a[i];
        k++,i++;
    }
    while(j<=high)
    {
      b[k]=a[j];
      k++,j++;  
    }
   for(x=low;x<=high;x++)
    {
      a[x]=b[x];  
    }
}
void mergesort(int arr[],int low,int high)
{
  if(low<high)
  {
   int mid=(low +high)/2;
   mergesort(arr,low,high);
   mergesort(arr,mid+1,high);
   merge(arr,low,mid,high);    
  }  
}
