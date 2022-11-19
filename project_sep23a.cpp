#include<iostream>
using namespace std;
int main()
{
    int a;
    int c=0;
    cout<<"input a number"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
    if(i%2!=0)
        {
           cout<<i;
             c=c+i;
        cout<<"+";
            }
}
    cout<<"="<<c;
}
    
