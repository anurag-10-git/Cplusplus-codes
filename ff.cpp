#include<iostream>
using namespace std;
class x
{
 private:
 int x;
 public:
void getinfo()
{
cout<<"enter value";
cin>>x;
}
void display()
{
cout<<"value="<<x;
}
}ob1;
int main()
{
ob1.getinfo();
ob1.display();
}