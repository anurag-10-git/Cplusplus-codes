#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"input number of rows\n";
    cin>>n;
    cout<<"input number of columns\n";
    cin>>m;
    int arr[n][m];
    cout<<"\ninput the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
         cin>>arr[i][j];
        }
    }
    //int x;
   // cout<<"enter the number to be searched"<<endl;
    //cin>>x;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;i++)
        {
            //if(arr[i][j]==x)
            {
            //cout<<"search found "<<endl;
               // cout<<"position "<<i<<","<<j;
                cout<<arr[i][j]<<" ";
             }
        }
        cout<<endl;
    }
}