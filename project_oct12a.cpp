#include<iostream>
using namespace std;
int sum(int x,int y);
int main()
{
    int ch;
    int a,b;
    float average=0;
    float percentage=0;
    do
    {
    cout<<"\n\n=====MENU=====\n";
        cout<<"1.average\n";
        cout<<"2.percentage\n";
        cout<<"3.exit\n";
        cout<<"!.choice\n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"enter two numbers";
            cin>>a>>b;
            average=sum(a,b)/2;
            cout<<"\nthe average of two       numbers is "<<average;
            break;
            case 2:
            cout<<"enter two numbers";
            cin>>a>>b;
            percentage=((float)a/sum(a,b)*100);
            cout<<"\n the percentage of"<<a<<"in the sum is: "<<percentage<<"%";
            cout<<"\n the percentage of"<<b<<" in the sum is: "<<(100-percentage)<<"%";
            
            
    }
}
    while(ch!=3);
}
int sum(int a,int b)
{
int c=a+b;
    return c;
    }