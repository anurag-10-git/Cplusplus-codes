#include<iostream>
using namespace std;
class Shop
{
    protected:
    int id;
    string name;
    
    public:
    Shop(int i,string s)
    {
     id=i;
     name=s;
    }
    void show()
    {
      cout<<"id ::"<<id<<endl;
      cout<<"name ::"<<name<<endl;
    }
};
class Owner:public Shop
{
    protected:
    string oname;
    float income;
    
    public:
    Owner(int v1,string v2,string v3,float v4):Shop(v1,v2)
 {
    oname=v3;
    income=v4;    
 }
};
int main()
{  
Owner obj(12,"anurag","colon",12);
}