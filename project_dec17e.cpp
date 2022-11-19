#include<iostream>
using namespace std;
class BOX
{
  private:
    int l;
    int b;
    int h;
    public:
   void setdimension(int l,int b,int h)  
    {
     this->l=l;
     this->b=b;
     this->h=h;
    }
    void getdimension()
    {
        cout<<"l="<<l<<" b="<<b<<" h="<<h;
    }
};
int main()
{
   
    BOX *ptr=new BOX;
    ptr->setdimension(10,38,20);
    ptr->getdimension();
}