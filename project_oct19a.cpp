#include<iostream>
using namespace std;
int linearsearch(int arr[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i+1;
        }
        else
        return -1;
        }
 }
int main()
{
    int n=0,key;
    cout<<"enter maximum number\n";
    cin>>n;
    cout<<"enter the values\n";
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];   
    }
    cout<<"enter number to be found\n";
    cin>>key;
    
   cout<<linearsearch(arr,key,n); 
}