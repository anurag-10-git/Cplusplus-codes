#include<iostream>
using namespace std;

void test(int n)
{
    if(n>0)
    {
        cout<<"no is "<<n<<endl;
        test(n-1);
        cout<<"no is for 2nd call "<<n<<endl;
        test(n-1);
    }
}
int main()
{
    test(3);
}