#include<iostream>
using namespace std;
class employee
{
 private:
    int id;
    int salary;
    
    public:
    void setdata()
    {
      cout<<" give employee id"<<endl;
        cin>>id;
      cout<<"employee salary "<<endl;
        cin>>salary; 
    }
    void getdata()
    {
    cout<<"employee id.- "<<id<<endl;
    cout<<"employee salary.- "<<salary<<endl;
    }
       
};
int main()
{
  class employee arr[5];
    for(int i=0;i<5;i++)
    {
     arr[i].setdata();
     arr[i].getdata();   
    }
}