#include<iostream>
using namespace std;
class employee
{
    private:
    int id;
    static int count;
    
    public:
    void setdata()
{
    cout<<"enter employee id"<<endl;
    cin>>id;
    count++;
}
   void getdata()
{
    cout<<"employee no.- "<<count<<" id no. is "<<id<<endl;
}
  static void getcount(void)
{
  cout<<"count = "<<count<<endl;  
} 
    
};


int employee::count=1000;
int main()
{
    class employee harry,anurag,vinod,nikhil;
    harry.setdata();
    harry.getdata();
    employee::getcount();
    
    anurag.setdata();
    anurag.getdata();
    employee::getcount();
    
    vinod.setdata();
    vinod.getdata();
    employee::getcount();
    
    nikhil.setdata();
    nikhil.getdata();
    employee::getcount();
 }