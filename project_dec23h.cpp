#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[]={2,5,4,1,7,6};
    sort(arr,arr+6);
    sort(arr,arr+6,greater<int>());
    for(int i=0;i<6;i++)
    {
     cout<<arr[i]<<"\t";
    }
}