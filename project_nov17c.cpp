#include<iostream>
using namespace std;
class X
{
 public:
 int x;
 void sqr()
{
 cout<<x*x;
}
};
int main()
{
 class X sr1;
 sr1.x=20; 
 sr1.sqr();
}