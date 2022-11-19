#include<iostream>
using namespace std;
struct sname
{
    char fname[10];
    char iname[10];
}s1;
class Test
{
    int a,b;
    const int max;
    sname &name;
    
    public:
    Test():max(300),name(s1)
    {
        a=0;
        b=10;
    }
};