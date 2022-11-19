#include<iostream>
using namespace std;
class Employee
{
    public:
    int idno;
    float salary;
    Employee()
    {}
    Employee(int idnum)
    {
     idno=idnum;
     salary=300;
    }
};
class programmer:private Employee
{
    public:
    int langcode;
    programmer(int idnum)
    {
     idno=idnum;
        langcode=9 ;   }
     
    void getdata()
    {
        cout<<idno<<endl;
    }
};
int main()
{
  class Employee o1(2),o2(4);
    cout<<o1.salary<<endl;
    cout<<o2.salary<<endl;
    class programmer skillf=programmer(2);
    cout<<skillf.langcode<<endl;
    skillf.getdata();
    /*skillf.idno;//cannot be called dervied class is under private*/
   
}