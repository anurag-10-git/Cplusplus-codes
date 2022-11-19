#include<iostream>
using namespace std;
class Student
{
    private:
    int roll_no[3];
    string name[3];
    float marks[3];
    
    public:
    void getdata();
    void topper();
    void display(int i);
};
void Student::getdata()
{
    for(int i=0;i<3;i++)
    {
      cout<<"enter details of student no."<<i+1<<endl;  
        cout<<"Enter name: ";
        cin>>name[i];
        cout<<"Enter roll no: ";
        cin>>roll_no[i];
        cout<<"Enter mark: ";
        cin>>marks[i];
        cout<<"---------------"<<endl;
    }
}
void Student::display(int i)
{
    cout<<"---THE TOPPER IS---"<<endl;
    cout<<"name:- "<<name[i]<<endl;
    cout<<"roll no:- "<<roll_no[i]<<endl;
    cout<<"marks:- "<<marks[i]<<endl;
}
void Student::topper()
{   
    int i;
     int static set;
    float maxmark=marks[0];
    for(i=0;i<3;i++)
    {
     if(marks[i]>maxmark)
        {
         maxmark=marks[i];
            set=i;
        }
    }
    display(set);
}
int main()
{
    class Student ob1;
    ob1.getdata();
    ob1.topper();
}