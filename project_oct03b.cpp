#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,rem;
    cout<<"enter a number to check";
    cin>>n;
    int temp;
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    cout<<rev<<endl;
    if(rev==n)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
 }