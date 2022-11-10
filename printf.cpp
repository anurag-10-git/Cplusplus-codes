#include<iostream>
using namespace std;
void DAC(int n)
{
if(n>0)
{
    cout<<"print num "<<n<<endl;
    DAC(n-1);
}
}
int main()
{
DAC(4);
}