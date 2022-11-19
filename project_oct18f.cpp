#include<iostream>
using namespace std;
int main()
{
    int n,i,z=1;
    cout<<"enter size\n";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array\n";
for(i=0;i<n;i++)
{
 cin>>arr[i];    
}
    int x;
    cout<<"enter number to be found";
    cin >>x;
    for(i=0;i<n;i++)
    {
      if(arr[i]==x)
        {
            z=-1;
            }
        }
    if(z==1)
        {
    cout<<"search not found\n";
        }
    if(z==-1)
    {
    cout<<"search found";
        }
    }
    