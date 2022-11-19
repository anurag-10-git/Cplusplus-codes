#include<iostream>
using namespace std;
int main()
{
    int n,element,z=1;
    cout<<"enter maximum number\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array\n";
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    cout<<"enter the element to be searched\n";
    cin>>element;

int low=0;
int high=n;
while(low<=high)
{
    int mid=(low+high)/2;
    if(arr[mid]==element)
    {
        cout<<"the position of element is " <<mid+1;
            z=-1;
    }
    if(arr[mid]<element)
    {
        low=mid+1;
           
    }
    else
    {
        high=mid-1;
    }
        }
    if(z==1)
    {
    cout<<"search not found";
}
    }