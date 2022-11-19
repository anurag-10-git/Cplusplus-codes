#include<iostream>
using namespace std;
class ShopItem
{
    int id;
    float price;
    
    public:
    void setdata(int i,float f)
    {
     id=i;
     price=f;
    }
    
    void getdata()  
    {
     cout<<"id::"<<id<<endl;
     cout<<"price::"<<price<<endl;
    }
};
int main()
{
    
    int x,y;
    ShopItem* ptr=new ShopItem[3];
    ShopItem *ptrtemp=ptr;
    for(int i=0;i<3;i++)
    {
        cout<<"enter id"<<endl;
        cin>>x;
        cout<<"enter price"<<endl;
        cin>>y;
        ptr->setdata(x,y);
        ptr++; 
    }
    for(int i=0;i<3;i++)
    {
     ptrtemp->getdata();
        ptrtemp++;
    }
}