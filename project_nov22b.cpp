#include<iostream>
using namespace std;
class ITEM
{
    private:
    int itemno;
    float price;
    
    public:
    void setdata(int a,int b)
    {
       itemno=a;
       price=b; 
    }
    void getdata()
    {
     cout<<"itemno."<<itemno<<"/"<<"price-"<<price<<endl;
    }
};
int main()
{
    class ITEM ob[4];
    for(int i=0;i<4;i++)
    {
        int a,b;
     cout<<"enter the details of item no."<<i+1<<endl;
        cout<<"item no."<<endl;
        cin>>a;
        cout<<"price"<<endl;
        cin>>b;
        ob[i].setdata(a,b);
    }
    cout<<endl;
    for(int i=0;i<4;i++)
    {
       ob[i].getdata();
    }
    
}