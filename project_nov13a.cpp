#include<iostream>
using namespace std;
class shop
{
    private:
    int itemid[50];
    int itemprice[50];
    string name[50];
    
    
    public:
    
    int counter;
    void incounter(void)
        {
        
        cout<<"enter the number of items"<<endl;
        cin>>counter;
        }
    void setitem(void);
    void displayitem(void);
};
void shop::setitem()
{
    int i=0;
    do
    {
    cout<<"enter item id no.: "<<endl;
        cin>>itemid[i];
    cout<<"name.: "<<endl;
        cin>>name[i];
        cout<<"enter price : "<<endl;
        cin>>itemprice[i];
        i++;
        }while(i<counter);
}
void shop::displayitem()
{
  for(int i=0;i<counter;i++)  
    {
        cout<<"--------------------"<<endl;
    cout<<"item id : "<<itemid[i]<<endl;
       cout<<"item name : "<<name[i]<<" / item price : "<<itemprice[i]<<endl;
}
}
int main()
{
    class shop dukan;
    dukan.incounter();
    dukan.setitem();
    dukan.displayitem();
}