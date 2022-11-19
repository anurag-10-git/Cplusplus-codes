#include<iostream>
using namespace std;
class ITEM
{
    int itemcode[5];
    float itprice[5];
    
    public:
    void setdata();
    float largest();
    float sum();
    void display();
};
void ITEM::setdata()
{
    for(int i=0;i<5;i++)
    {
      cout<<"------------------"<<endl;
      cout<<"enter item id:"<<endl;
        cin>>itemcode[i];
      cout<<"enter price:"<<endl;
        cin>>itprice[i];  
    }
}
float ITEM::largest()
{
    float maxprice=itprice[0];
  for(int i=0;i<5;i++)
    {
        
        if((itprice[i])>maxprice)
        {
         maxprice=itprice[i];
        }
    }
    return maxprice;
}
float ITEM::sum()
{ 
    float sum=0;
    for(int i=0;i<5;i++)
    {
     sum=sum+itprice[i];
    }
    return sum;
}
void ITEM::display()
{
   for(int i=0;i<5;i++) 
    {
     cout<<"item no."<<i+1<<":"<<itemcode[i]<<endl;
        cout<<"price_:-"<<itprice[i];
    }
}
int main()
{
  ITEM ob1;
    float largest,add;
    ob1.setdata();
    largest=ob1.largest();
    cout<<"largest="<<largest<<endl;
    add=ob1.sum();
    cout<<"addition of all inputs="<<add<<endl;
   ob1.display();
      
}