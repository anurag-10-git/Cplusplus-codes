#include<iostream>
using namespace std;
const int LEN=25;
class person
{
    protected:
    string name;
    int age;
    
    person(string n,int a)
    {
      name=n;   
      age=a;
    }
    void show()
    {
      cout<<"Name  :  "<<name<<endl;
      cout<<"age   :  "<<age<<endl;
    }
};
class student:public person
{
    protected:
    int rollno;
    float avgmarks;
    
    public:
    student(int r,float a,string c,int v):person(c,v)
      {
        rollno=r;
        avgmarks=a;
      }
};
class gardstudent:public student
{
    private:
    char subject[LEN];
    char working[LEN];
    
    public:
    gardstudent(int v1,float v2,int v3,string v4,char v5,char v6):student(v1,v2,v4,v3)
    {
        subject=;
        
        
    }
};