#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
    protected:
    int rollno;
    string name;
    
    public:
    void setdata(int a,string m)
    {
      rollno=a;
      name=m; 
    }
    void printdata()
    {
     cout<<":::::::::::::::::::::::::::"<<endl;
     cout<<"name: "<<name<<endl;
     cout<<"roll number: "<<rollno<<endl;  
    }
};
class Test:virtual public Student
{
 protected:
 float maths;
 float physics;   
    
    public:
    void setmarks(float m1,float m2)
    {
        maths=m1;
        physics=m2;
    }
    void printmarks()
    {
     cout<<"Marks obtain in MATHS:"<<maths<<endl;
        cout<<"Marks obtain in PHYSICS:"<<physics<<endl;
    }
};
class Sports:virtual public Student
{   
    protected:
    int score;
    
    public:
    void set_score(int sc)
    {
        score=sc;
    }
    void printscore()
    {
        cout<<"Score obtained in sports: "<<score<<endl;
    }   
};
class Result:public Test,public Sports
{
    private:
    float result;
    
    public:
    void display()
    {
     printdata();
     printmarks();
     printscore();
        cout<<"-------------------"<<endl;
     cout<<"total marks obtained: "<<maths+physics+score<<"/300"<<endl;
        if((maths+physics+score)<150)
        {
         cout<<"RESULT : FAIL"<<endl;
        }
        else
          cout<<"RESULT : PASS "<<endl;
    }
};
int main()
{
    Result shilpi;
    int rn;
    string nm;
    cout<<"enter roll no:"<<endl;
    cin>>rn;
    cout<<"enter name:"<<endl;
    cin>>nm;
    shilpi.setdata(rn,nm);
    shilpi.setmarks(100,99);
    shilpi.set_score(100);
    shilpi.display();   
}