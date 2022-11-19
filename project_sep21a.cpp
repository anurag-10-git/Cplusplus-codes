#include<iostream>
using namespace std;
int main()
{
    int a;
cout<<"tell me your age"<<endl;
    cin>>a;
    switch(a)
    {
        case 4:
        cout<<"age 4"<<endl;
        break;
        case 7:
        cout<<"age 7"<<endl;
        break;
        default:
        cout<<"no age"<<endl;
    }
    return 0;
    }