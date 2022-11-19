void selectionsort(int arr[],int n)
{
    int minIndex,temp;
    for(int i=1;i<n-1;i++)
    {
        minIndex=i;
        for(int j=i+1;i<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                
              minIndex=j;
               
            }
            temp=arr[i]
            arr[i]=arr[minIndex]
            arr[minIndex]=temp;
            
        }
    }
}