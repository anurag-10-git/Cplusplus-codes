#include<iostream>
using namespace std;
int main()
{
    int a[5],b[6],arr[11];
    int s1=5,s2=6;
    cout<<"enter the elements of 1st array"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the elements of 2nd array"<<endl;
    for(int j=0;j<6;j++) 
    {
       cin>>b[j];
    }
    int i=0,j=0,k=0;
    while((i<s1)&&(j<s2))
    {
        if(a[i]<b[j])
        {
            arr[k]=arr[i];
            i++;k++;
        }
        else
        {
        arr[k]=arr[j];
            j++;k++;
    }
        }
        while(i<s1)
        {
         arr[k]=arr[i];
            k++;i++;
        }
        while(j<s2)
        {
            arr[k]=arr[j];
            k++;j++;
        }
    
    cout<<"the elements of merged sorted array are \n";
    for(k=0;k<11;k++)
    {
    cout<<arr[k]<<" ";
}
}