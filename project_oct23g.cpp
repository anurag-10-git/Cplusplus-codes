#include<iostream>
using namespace std;
int main()
{
    char arr[40];
    cout<<"enter the word to check\n";
    gets(arr);
    int i=0,j,flag=0;
    j=strlen(arr)-1;
    for(i=0;i<strlen(arr)-1;i++)
    {
    if(arr[i]!=arr[j])
        {
           flag++; 
        }
        j--;
    }
    if(flag==0)
    {
        cout<<"palindrome string";
    }
    else 
    cout<<"not a palindrome";
}