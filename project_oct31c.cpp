#include<iostream>
using namespace std;
int main()
{
  int n=5,m=10;
  int* ptr=&n;
    *ptr=2;
    ptr=&m;
    *ptr=1;
    cout<<n<<endl;
    cout<<m;  
}