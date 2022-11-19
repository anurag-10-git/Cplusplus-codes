#include<iostream>
using namespace std;
int main()
{
  int a[]={50,20,45,55};
    cout<<"value of 0 "<<a[0]<<endl;
    cout<<"value of 1 "<<a[1]<<endl;
    cout<<"value of 2 "<<a[2]<<endl;
    cout<<"value of 3 "<<a[3]<<endl;
    for(int i=0;i<=3;i++)
    {
        cout<<"value of "<<i<<" "<<a[i]<<endl;
    }
    int i=0;
    while(i<=3)
    {
     cout<<a[i]<<endl;  
        i++; 
         }
    i=0;
    do
    {
        cout<<"value "<<a[i]<<endl;
        i++;
        }
    
    while(i<=3);
    int* p=a;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;    
}