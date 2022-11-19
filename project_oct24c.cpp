void selection(int arr[],int n)
{
    
    for(int i=0;i<n-1;i++)
    {
        int min=i,temp;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;  
        }
    }
}    
   