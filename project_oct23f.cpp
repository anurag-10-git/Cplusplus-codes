#include<iostream>
using namespace std;
void palindrome(int a)
{
    int rem,rev=0;
    int temp=a;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(rev==a)
    {
        cout<<"palindrome";
    }
    else
    cout<<"not palindrome";
}
int main()
{
    int a;
    cout<<"enter a number to check for palindrome\n";
    cin>>a;
    cout<<"\n";
    palindrome(a);
}