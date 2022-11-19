#include<iostream>
using namespace std;
inline void maxi(int a,int b)
{
 cout<<(a>b?a:b);
    }
int main()
{
    int x,y;

    cout<<"enter two numbers"<<endl;
    cin>>x>>y;
    maxi(x,y);
    
}
    