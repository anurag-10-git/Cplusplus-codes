#include<iostream>
using namespace std;
int main()
{
    x:
int n,rem,sum=0;
    char ch;
    cout<<"enter number";
    cin>>n;
    cout<<endl;
   int temp;
    temp=n;
    while(temp!=0)
    {
     rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
        }
    cout<<sum;
    if(n==sum)
    {
        cout<<"armstrong number";
    }
    else
    cout<<"not an armstrong number";
    
    cout<<"\nyou want to continue??\n";
    cin>>ch;
    if(ch=='y')
    {
        goto x;
    }
        else
    cout<<"thank you";   
    }
