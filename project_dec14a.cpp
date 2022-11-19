#include<iostream>
#include<stdio.h>
using namespace std;
const int LEN=25;
class Employee
{
    private:
    char name[LEN];
    unsigned long enumb;
    
    protected:
    float basic;
    void getbasic()
    {
        cout<<"enter basic salary:";
        cin>>basic;
    }
    
    public:
    void getdata()
    {
     cout<<"Enter name:";
        gets(name);
        cout<<"\nenter employee number:"<<endl;
        cin>>enumb;
    }
    void putdata()
    {
     cout<<"Name: "<<name<<endl;
        cout<<"Employee Number: "<<enumb<<endl;
        cout<<"Basic Salary:"<<basic<<endl;
    }
};

class Manager: public Employee
{
  private:
    char title[LEN];
    
    public:
    void getdata()
    {
    // Employee::getdata();
      //  getbasic();
        cout<<"Enter Title:";
        gets(title);
        cout<<endl;
    }
    void putdata()
    {
   //  Employee::putdata();
        cout<<"Title: "<<title<<endl;
    }
};
int main()
{
    Employee ob1,ob2;
    Manager m1,m2;
    cout<<"MANAGER 1\n";
    ob1.getdata();
    m1.getdata();
    cout<<"MANAGER 2\n";
    m2.getdata();
    cout<<"\t\tMANAGER1 Detail\n";
    ob1.putdata();
    m1.putdata();
    cout<<"\t\tMANAGER2 Detail\n";
    m2.putdata();
}