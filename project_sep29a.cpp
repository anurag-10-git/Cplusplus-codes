#include<iostream>
using namespace std;
int main()
{
int a=3;
int* b=&a;
    cout<<"address of a "<<&a<<endl;
    cout<<"address of a in b "<<b<<endl;
    cout<<"value of a "<<a<<endl;
    cout<<"value of a in b "<<*b<<endl;
    int** c=&b;
    cout<<"address of b "<<&b<<endl;
    cout<<"address of b in c "<<c<<endl;
    
    cout<<"value of b in c "<<*c<<endl;
    cout<<"value of a in c "<<**c<<endl;
    }