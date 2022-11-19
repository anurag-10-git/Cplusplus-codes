#include<iostream>
using namespace std;
void LinearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
    if(arr[i]==key)
        {
            cout<<"element found"<<endl;
            return;
        }
            
        }
    cout<<"element not found"<<endl;
}

int main()
{
    int n;
    cout<<"enter max array elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
}
    int key;
    cout<<"key elements"<<endl;
    cin>>key;
    LinearSearch(arr,n,key);
}