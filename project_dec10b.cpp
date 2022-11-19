#include<iostream>
using namespace std;
class STUDENT
{
    protected:
    int roll_no;
    
    public:
    void setdata(int r);
    void getdata();
};
void STUDENT::setdata(int r)
{
    roll_no=r;
}
void STUDENT::getdata()
{
    cout<<"roll no::"<<roll_no<<endl;
}
class EXAM:public STUDENT
{
    protected:
    float maths;
    float physics;
    
    public:
    void setmarks(float a,float b)
    {
        maths=a;
        physics=b;
    }
    void getmarks()
    {
     cout<<"maths marks::"<<maths<<endl;
       cout<<"physics marks::"<<physics<<endl; 
    }
};
class RESULT:public EXAM
{
    float percentage;
    
    public:
    void display()
    {
     getdata();
     getmarks();
     cout<<"percentage="<<(maths+physics)/2<<"%"<<endl;
    }
       
 };
int main()
{
    RESULT ex;
    ex.setdata(2);
    ex.setmarks(85,88);
    ex.display();
}