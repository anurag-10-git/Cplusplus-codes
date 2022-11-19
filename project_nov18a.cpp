#include<iostream>
using namespace std;
class X
{
  private:
    int x;
    void fc()  
    {
    cout<<x<<endl;
    }
  public:
    int i;
    void fcc()
    {
     cout<<2*i<<endl;
        x=13;
        fc();
    }
}ob1;
int main()
{   
    ob1.i=10;
    ob1.fcc();
}