#include<iostream>
using namespace std;
int main()
{
    int num,rev=0,rem;
    cout<<"enter a number to check"<<endl;
    cin>>num;
    int temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
        
    }
    if(rev==num)
    {
        cout<<"palindrome number";
    }
    else
    cout<<"not a palindrome";
    
    
}