#include<iostream>
using namespace std;
class Student
{
    int rollno;
    string name;
    
    public:
    
    Student(int a=0,string b="no input" )
    {
        cout<<"constructor called!!!"<<endl;
        rollno=a;
        name=b;
     }
    void printstu()
    {
     cout<<"rollno:: "<<rollno<<" name:: "<<name<<endl;
    }
};
class Subject
{
    int subjectid;
    string subname;
    
    public:
    Subject()
    {
        cout<<"constructor called"<<endl;
        subjectid=0;
        subname="no input";
    }
    void getdata()
    {
     cout<<"enter subject id"<<endl;
        cin>>subjectid;
        cout<<"subject name"<<endl;
        cin>>subname;
    }
    void printdata()
    {
        
       cout<<"-----------------"<<endl;
       cout<<"subject id: "<<subjectid<<endl;
        cout<<"subject name: "<<subname;
       
     }
};
class Admission
{
 Subject sb;
 Student obj=Student(11,"anurag");
 int admissionid;
  float fee;
    
 public:
    Admission(int a,float b)
    {
     admissionid=a;
        fee=b;
    }
    void display()
    {
        sb.getdata();
        
     cout<<"admission id"<<admissionid<<endl;
        
        cout<<"----------------"<<endl;
       obj.printstu();
        sb.printdata();
        cout<<"\n=============="<<endl;
        cout<<"fee="<<fee<<endl;
     }
};
int main()
{
    Admission ob1(100,12000);
    ob1.display();
}
