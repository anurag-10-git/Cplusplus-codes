#include<iostream>
using namespace std;
int main()
{
    int arr[2][2]={2,4,6,8};
    int arr1[2][2]={5,1,3,7};
    int arr3[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr3[i][j]=0;
            for(int k=0;k<2;k++)
            {
             arr3[i][j]+=arr[i][k]*arr1[k][j];
            }
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
          cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}
