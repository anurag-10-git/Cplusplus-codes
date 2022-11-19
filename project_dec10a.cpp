#include<iostream>
using namespace std;
class BASE
{
  private:
    int b;
    
  protected:
    int a=10;
      
};
class DERIVED:protected BASE
{
 public:
   int c=a;   
};
int main()
{
    DERIVED d;
    cout<<d.c;
}